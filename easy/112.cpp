/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   112.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:36:10 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:10:47 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 112. Path Sum [easy]
*/

class Solution {
	public:
		bool hasPathSum(TreeNode* root, int sum) {
			if (!root)
				return false;
			if (!root->left && !root->right && root->val == sum) {
				return true;
			}
			return (hasPathSum(root->left, sum - root->val) ||
					hasPathSum(root->right, sum - root->val));
		}
};
