/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:34:12 by mikim             #+#    #+#             */
/*   Updated: 2019/10/28 14:34:29 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 101. Symmetric Tree [easy]
*/

class Solution {
	public:
		bool isMirror(TreeNode* l, TreeNode* r) {
			if (!l && !r)
				return true;
			if (!l || !r)
				return false;
			return (l->val == r->val) &&
				isMirror(l->right, r->left) && isMirror(l->left, r->right);
		}
		bool isSymmetric(TreeNode* root) {
			return isMirror(root, root);
		}
};
