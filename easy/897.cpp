/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   897.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:24:40 by mikim             #+#    #+#             */
/*   Updated: 2020/01/09 21:25:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 897. Increasing Order Search Tree [easy]
*/

class Solution {
	public:
		TreeNode* increasingBST(TreeNode* root) {
			stack<TreeNode*> st;
			TreeNode *curr = root, *tmp = NULL;

			while (curr || !st.empty()) {
				while (curr) {
					if (curr)
						st.push(curr);
					curr = curr->left;
				}
				curr = st.top(); st.pop();
				curr->left = NULL;
				if (!tmp) {
					tmp = curr;
					root = curr;
				}
				else {
					tmp->right = curr;
					tmp = tmp->right;
				}
				curr = curr->right;
			}
			return root;
		}
};
