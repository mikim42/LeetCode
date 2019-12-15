/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   830.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:03:52 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:04:06 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 830. Positions of Large Groups [easy]
*/

class Solution {
	public:
		vector<vector<int>> largeGroupPositions(string S) {
			vector<vector<int>> vv;
			int st = 0;
			int cnt = 0;

			for (int i = 0; i < S.size(); i++) {
				if (i < S.size() - 1 && S[i] == S[i + 1]) {
					cnt++;
				}
				else {
					if (cnt > 1)
						vv.push_back(vector<int>{st, i});
					cnt = 0;
					st = i + 1;
				}
			}
			return vv;
		}
};
