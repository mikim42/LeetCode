/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   637.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:44:42 by mikim             #+#    #+#             */
/*   Updated: 2020/02/13 13:45:20 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 637. Average of Levels in Binary Tree [easy]
*/

class Solution {
	public:
		vector<double> averageOfLevels(TreeNode* root) {
			vector<double> v;
			queue<TreeNode*> q;

			if (root)
				q.push(root);
			while (!q.empty()) {
				int size = q.size();
				double sum = 0;
				for (int i = 0; i < size; i++) {
					TreeNode *node = q.front(); q.pop();
					sum += node->val;
					if (node->left)  q.push(node->left);
					if (node->right) q.push(node->right);
				}
				v.push_back(sum / size);
			}
			return v;
		}
};
