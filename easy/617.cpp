/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   617.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:58:30 by mikim             #+#    #+#             */
/*   Updated: 2019/10/15 13:58:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 617. Merge Two Binary Trees [easy]
*/

class Solution {
	public:
		void merg(TreeNode* t1, TreeNode* t2) {
			if (!t1 || !t2)
				return ;
			if (t1 && t2)
				t1->val += t2->val;
			if (t2->left) {
				if (t1->left)
					merg(t1->left, t2->left);
				else
					t1->left = t2->left;
			}
			if (t2->right) {
				if (t1->right)
					merg(t1->right, t2->right);
				else
					t1->right = t2->right;
			}
		}

		TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
			if (!t1)
				return t2;
			merg(t1, t2);
			return t1;
		}
};
