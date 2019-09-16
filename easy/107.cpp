/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   107.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:28:01 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:10:42 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 107. Binary Tree Level Order Traversal II [easy]
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
	public:
		vector<vector<int>> levelOrderBottom(TreeNode* root) {
			vector<vector<int>>	vvi;
			vector<int>			vi;
			queue<TreeNode*>	q[2];

			q[0].push(root);
			while (!q[0].empty()) {
				TreeNode *tmp = q[0].front(); q[0].pop();
				if (tmp) {
					vi.push_back(tmp->val);
					q[1].push(tmp->left);
					q[1].push(tmp->right);
				}
				if (q[0].empty()) {
					if (vi.size() != 0)
						vvi.push_back(vi);
					vi.clear();
					swap(q[0], q[1]);
				}
			}
			reverse(vvi.begin(), vvi.end());
			return vvi;
		}
};
