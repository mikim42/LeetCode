/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1030.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 14:02:17 by mikim             #+#    #+#             */
/*   Updated: 2019/10/04 14:02:36 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1030. Matrix Cells in Distance Order [easy]
*/

class Solution {
	public:
		vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
			auto cmp = [r0, c0](vector<int> &lhs, vector<int> &rhs) {
				return abs(r0 - lhs[0]) + abs(c0 - lhs[1]) < abs(r0 - rhs[0]) + abs(c0 - rhs[1]);
			};

			vector<vector<int>> r;
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					r.push_back({i, j});
				}
			}
			sort(r.begin(), r.end(), cmp);
			return r;
		}
};
