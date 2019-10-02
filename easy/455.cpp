/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   455.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 12:13:43 by mikim             #+#    #+#             */
/*   Updated: 2019/10/02 12:14:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 455. Assign Cookies [easy]
*/

class Solution {
	public:
		int findContentChildren(vector<int>& g, vector<int>& s) {
			sort(g.begin(), g.end());
			sort(s.begin(), s.end());

			int cnt = 0, i = 0, j = 0;
			while (i < g.size() && j < s.size()) {
				if (g[i] <= s[j]) {
					cnt++;
					i++;
				}
				j++;
			}
			return cnt;
		}
};
