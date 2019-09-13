/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   958.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:41:39 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 18:42:10 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 958. [medium] Check Completeness of a Binary Tree
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
		bool isCompleteTree(TreeNode* root) {
			queue<TreeNode*> q;

			q.push(root);
			bool seenNull = false;
			while (!q.empty()) {
				TreeNode* curr = q.front(); q.pop();
				if (curr == NULL)
					seenNull = true;
				else if (seenNull)
					return false;
				else {
					q.push(curr->left);
					q.push(curr->right);
				}
			}
			return true;
		}
};
