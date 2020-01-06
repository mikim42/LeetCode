/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   429.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 13:21:17 by mikim             #+#    #+#             */
/*   Updated: 2020/01/06 13:21:51 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 429. N-ary Tree Level Order Traversal [medium]
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
	public:
		vector<vector<int>> levelOrder(Node* root) {
			vector<vector<int>> vvi;
			vector<int> vi;
			queue<Node*> q;
			int cnt = 0;

			if (!root)
				return vvi;
			q.push(root);
			cnt = 1;
			while (!q.empty()) {
				Node* tmp = q.front(); q.pop();
				cnt--;
				if (tmp) {
					vi.push_back(tmp->val);
					for (auto &x : tmp->children)
						q.push(x);
				}
				if (cnt == 0) {
					vvi.push_back(vi);
					vi.clear();
					cnt = q.size();
				}
			}
			return vvi;
		}
};
