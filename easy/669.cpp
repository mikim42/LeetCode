/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   669.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:15:33 by mikim             #+#    #+#             */
/*   Updated: 2020/01/31 11:15:47 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 669. Trim a Binary Search Tree [easy]
*/

class Solution {
	public:
		TreeNode* trimBST(TreeNode* root, int L, int R) {
			if (!root)
				return root;
			if (root->val < L)
				return trimBST(root->right, L, R);
			if (root->val > R)
				return trimBST(root->left, L, R);
			root->left = trimBST(root->left, L, R);
			root->right = trimBST(root->right, L, R);
			return root;
		}
};
