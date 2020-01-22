/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   543.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:01:27 by mikim             #+#    #+#             */
/*   Updated: 2020/01/22 13:01:43 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 543. Diameter of Binary Tree [easy]
*/

class Solution {
	private:
		int helper(TreeNode* root, int& res) {
			if (!root)
				return 0;
			int l = 0, r = 0;
			if (root->left)
				l = helper(root->left, res);
			if (root->right)
				r = helper(root->right, res);
			res = max(res, l + r);
			return max(l, r) + 1;
		}

	public:
		int diameterOfBinaryTree(TreeNode* root) {
			int res = 0;
			helper(root, res);
			return res;
		}
};
