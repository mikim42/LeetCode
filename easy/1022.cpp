/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1022.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 22:21:00 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 14:40:43 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1022. [easy] Sum of Root To Leaf Binary Numbers
*/

class Solution {
	public:
		int sumRootToLeaf(TreeNode* root) {
			traverse(root, 0);
			return sum;
		}

		void traverse(TreeNode *root, int n) {
			if (!root)
				return ;

			n = n * 2 + root->val;

			traverse(root->left, n);
			traverse(root->right, n);

			if (!root->left && !root->right)
				sum += n;
		}

	private:
		int sum;
};
