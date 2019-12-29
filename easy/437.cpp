/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   437.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 15:59:06 by mikim             #+#    #+#             */
/*   Updated: 2019/12/28 15:59:29 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 437. Path Sum III [easy]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	private:
		void pathSum(TreeNode* root, int sum, int target, int &cnt) {
			if (!root)
				return;
			sum += root->val;
			if (sum == target)
				cnt++;
			pathSum(root->left, sum, target, cnt);
			pathSum(root->right, sum, target, cnt);
		}

	public:
		int pathSum(TreeNode* root, int sum) {
			queue<TreeNode*> q;
			int cnt = 0;

			q.push(root);
			while (!q.empty()) {
				TreeNode* tmp = q.front(); q.pop();
				if (!tmp)
					continue;
				q.push(tmp->left);
				q.push(tmp->right);
				pathSum(tmp, 0, sum, cnt);
			}
			return cnt;
		}
};
