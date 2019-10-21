/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   863.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:56:13 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:58:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 863. All Nodes Distance K in Binary Tree [medium]
*/

class Solution {
	public:
		unordered_map<TreeNode *, int> m;
		vector<int> r;

		vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
			find(root, target);
			dfs(root, target, K + 1, m[root]);
			return r;
		}

		int find(TreeNode *root, TreeNode *target) {
			if (root == NULL)
				return 0;
			if (root == target)
				return ++m[root];

			int left = find(root->left, target);
			if (left > 0)
				return (m[root] = left + 1);
			int right = find(root->right, target);
			if (right > 0)
				return (m[root] = right + 1);

			return 0;
		}

		void dfs(TreeNode *root, TreeNode *target, int K, int length) {
			if (root == NULL)
				return ;
			if (m[root] > 0)
				length = m[root];
			if (length == K)
				r.push_back(root->val);
			dfs(root->left, target, K, length + 1);
			dfs(root->right, target, K, length + 1);
		}
};
