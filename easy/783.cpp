/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   783.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:25:11 by mikim             #+#    #+#             */
/*   Updated: 2019/11/14 14:25:29 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 783. Minimum Distance Between BST Nodes [easy]
*/

class Solution {
	private:
		int res = INT_MAX;
		int prev = INT_MAX;
	public:
		int minDiffInBST(TreeNode* root) {
			if (root->left)
				min(res, minDiffInBST(root->left));
			res = min(res, abs(prev - root->val));
			prev = root->val;
			if (root->right)
				min(res, minDiffInBST(root->right));
			return res;
		}
};
