/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   111.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 13:53:49 by mikim             #+#    #+#             */
/*   Updated: 2019/12/05 13:53:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 111. Minimum Depth of Binary Tree [easy]
*/

class Solution {
	private:
		int minDepth(TreeNode* root, int depth) {
			if (!root->left && !root->right)
				return depth;
			int l = root->left ? minDepth(root->left, depth + 1) : INT_MAX;
			int r = root->right ? minDepth(root->right, depth + 1) : INT_MAX;
			return min(l, r);
		}
	public:
		int minDepth(TreeNode* root) {
			if (!root)
				return 0;
			return (minDepth(root, 1));
		}
};
