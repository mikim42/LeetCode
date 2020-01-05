/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   594.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:42:30 by mikim             #+#    #+#             */
/*   Updated: 2020/01/04 16:42:39 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 594. Longest Harmonious Subsequence [easy]
*/

class Solution {
	public:
		int findLHS(vector<int>& nums) {
			map<int, int> m;
			int res = 0;

			for (auto &x : nums)
				m[x]++;
			pair<int, int> tmp(*m.begin());
			for (auto &x : m) {
				if (abs(tmp.first - x.first) == 1)
					res = max(res, tmp.second + x.second);
				tmp = x;
			}
			return res;
		}
};
