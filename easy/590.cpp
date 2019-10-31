/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   590.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:03:40 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 11:04:01 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 90. N-ary Tree Postorder Traversal [easy]
*/

class Solution {
	public:
		void helper(Node *&root, vector<int> &vi) {
			if (!root)
				return;
			for (auto &x : root->children) {
				helper(x, vi);
			}
			vi.push_back(root->val);
		}

		vector<int> postorder(Node* root) {
			vector<int> vi;

			helper(root, vi);
			return vi;
		}
};
