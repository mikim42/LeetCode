/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1047.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:09:05 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 11:10:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1047. Remove All Adjacent Duplicates In String [easy]
*/

class Solution {
	public:
		string removeDuplicates(string S) {
			stack<char> st;
			string res = "";

			for (int i = 0; i < S.size(); i++) {
				if (st.empty())
					st.push(S[i]);
				else if (st.top() == S[i])
					st.pop();
				else
					st.push(S[i]);
			}
			res.resize(st.size());
			for (int i = res.size() - 1; i >= 0; i--) {
				res[i] = st.top();
				st.pop();
			}
			return res;
		}
};
