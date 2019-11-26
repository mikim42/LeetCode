/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   572.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:09:03 by mikim             #+#    #+#             */
/*   Updated: 2019/11/26 14:09:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 572. Subtree of Another Tree [easy]
*/

class Solution {
	private:
		bool isSubtreeHelper(TreeNode* s, TreeNode* t) {
			if (s == NULL && t == NULL)
				return true;
			if (s == NULL || t == NULL || s->val != t->val)
				return false;
			return isSubtreeHelper(s->left, t->left) && isSubtreeHelper(s->right, t->right);
		}

	public:
		bool isSubtree(TreeNode* s, TreeNode* t) {
			queue<TreeNode*> q;

			q.push(s);
			while (!q.empty()) {
				TreeNode* tmp = q.front(); q.pop();
				if (!tmp)
					continue;
				q.push(tmp->left);
				q.push(tmp->right);
				if (isSubtreeHelper(tmp, t))
					return true;
			}
			return false;
		}
};
