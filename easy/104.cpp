/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   104.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 09:51:19 by mikim             #+#    #+#             */
/*   Updated: 2019/10/06 09:51:41 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 104. Maximum Depth of Binary Tree [easy]
*/

class Solution {
	public:
		int maxDepth(TreeNode* root) {
			queue<TreeNode*> q;
			int size = 0;
			int depth = 0;

			if (!root)
				return 0;
			q.push(root);
			while (!q.empty()) {
				if (size == 0) {
					depth++;
					size = q.size();
				}
				TreeNode *tmp = q.front(); q.pop();
				if (tmp->left)
					q.push(tmp->left);
				if (tmp->right)
					q.push(tmp->right);
				size--;
			}
			return depth;
		}
};
