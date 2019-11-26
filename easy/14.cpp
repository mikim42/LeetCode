/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:35:10 by mikim             #+#    #+#             */
/*   Updated: 2019/11/26 14:35:25 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 14. Longest Common Prefix [easy]
*/

class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {
			int n = strs.size();
			int m = 0;
			string s;

			for (int i = 0; i < n; i++) {
				m = max(m, (int)strs[i].size());
			}
			for (int i = 0; i < m; i++) {
				s.push_back(strs[0][i]);
				for (int j = 1; j < n; j++) {
					if (i == strs[j].size() || s[i] != strs[j][i]) {
						s.erase(s.end() - 1);
						return s;
					}
				}
			}
			return s;
		}
};
