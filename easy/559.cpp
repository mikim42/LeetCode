/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   559.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:52:40 by mikim             #+#    #+#             */
/*   Updated: 2019/10/11 12:53:01 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 559. Maximum Depth of N-ary Tree [easy]
*/

class Solution {
	public:
		int maxDepth(Node* root) {
			queue<Node*> q;
			int size = 1, depth = 0;

			if (!root)
				return depth;
			q.push(root);
			while (!q.empty()) {
				Node *tmp = q.front(); q.pop();
				size--;
				for (auto x : tmp->children) {
					if (x != NULL) q.push(x);
				}
				if (size == 0) {
					depth++;
					size = q.size();
				}
			}
			return depth;
		}
};
