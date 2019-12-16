/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   589.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:16:16 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:16:18 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 589. N-ary Tree Preorder Traversal [easy]
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
	private:
		void stacksort() {
			stack<int> s1;
			stack<int> s2;

			for (int i = 9; i > 0; i--) {
				s1.push(i);
				s2.push(i * 10);
				cout << s1.top() << " " << s2.top() << endl;
			}

			stack<int> M;
			stack<int> R;

			while (!s1.empty() || !s2.empty()) {
				if (s1.empty()) {
					M.push(s2.top()); s2.pop();
				}
				else if (s2.empty()) {
					M.push(s1.top()); s1.pop();
				}
				else if (s1.top() > s2.top()) {
					M.push(s2.top());
					s2.pop();
				}
				else {
					M.push(s1.top()); s1.pop();
				}
			}
			while (!M.empty()) {
				R.push(M.top()); M.pop();
			}

			while (!R.empty()) {
				cout << R.top() << " ";
				R.pop();
			}
			cout << endl;
		}
	public:
		vector<int> preorder(Node* root) {
			vector<int> v;
			stacksort();
			return v;
		}
};
