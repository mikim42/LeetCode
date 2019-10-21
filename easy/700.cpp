/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   700.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:16:36 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:17:06 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 700. Search in a Binary Search Tree [easy]
*/

class Solution {
	public:
		TreeNode* searchBST(TreeNode* root, int val) {
			while (root) {
				if (root->val == val)
					break ;
				if (root->val > val)
					root = root->left;
				else
					root = root->right;
			}
			return root;
		}
};
