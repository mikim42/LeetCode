/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   965.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:35:06 by mikim             #+#    #+#             */
/*   Updated: 2019/12/03 11:35:47 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 965. Univalued Binary Tree [easy]
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
		bool isUnivalTree(TreeNode* root) {
			return (!root || (
				((!root->left || root->val == root->left->val) && isUnivalTree(root->left)) &&
				((!root->right || root->val == root->right->val) && isUnivalTree(root->right))
			));
		}
};
