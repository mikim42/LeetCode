/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   872.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:24:51 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:25:11 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 872. Leaf-Similar Trees [easy]
*/

class Solution {
	public:
		vector<int> leafValueSequence(TreeNode *root) {
			vector<int> v;
			stack<TreeNode*> st;

			st.push(root);
			while (!st.empty()) {
				TreeNode *tmp = st.top(); st.pop();
				if (!tmp)
					continue ;
				if (!tmp->left && !tmp->right)
					v.push_back(tmp->val);
				else {
					st.push(tmp->right);
					st.push(tmp->left);
				}
			}
			return v;
		}

		bool leafSimilar(TreeNode* root1, TreeNode* root2) {
			return leafValueSequence(root1) == leafValueSequence(root2);
		}
};
