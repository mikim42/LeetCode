/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   20.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:28:58 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:33:57 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 20. Valid Parentheses [easy]
*/

class Solution {
	public:
		bool isValid(string s) {
			stack<char> st;
			string  open = "([{";
			string  close = ")]}";

			for (size_t i = 0; i < s.length(); i++) {
				if (open.find(s[i]) != string::npos) {
					st.push(s[i]);
				}
				else if (close.find(s[i]) != string::npos && !st.empty()) {
					char c = st.top(); st.pop();

					if (!((c == '{' && s[i] == '}') ||
						(c == '(' && s[i] == ')' ||
						(c == '[' && s[i] == ']'))))
						return false;
				}
				else
					return false;
			}
			return st.empty();
		}
};
