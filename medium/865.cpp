/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   865.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:23:30 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:23:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 865. Smallest Subtree with all the Deepest Nodes [medium]
*/

class Solution {
	private:
		map<TreeNode*, bool> m;
		int maxDepth;

	public:
		void findDeepest(TreeNode *root, int depth) {
			if (!root)
				maxDepth = max(maxDepth, depth - 1);
			else {
				findDeepest(root->left, depth + 1);
				findDeepest(root->right, depth + 1);
			}
		}

		bool hasDeepest(TreeNode* root, int depth) {
			if (!root)
				return false;
			if (depth == maxDepth)
				return true;

			m[root->left] = hasDeepest(root->left, depth + 1);
			m[root->right] = hasDeepest(root->right, depth + 1);
			return m[root->left] || m[root->right];
		}

		TreeNode* subtreeWithAllDeepest(TreeNode* root) {
			if (!root || !root->left || !root->right)
				return root;

			findDeepest(root, 1);
			hasDeepest(root, 1);

			while (!m[root->left] || !m[root->right]) {
				if (m[root->left])
					root = root->left;
				else
					root = root->right;
			}
			return root;
		}
};
