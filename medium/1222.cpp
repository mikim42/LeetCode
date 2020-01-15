/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1222.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:03:37 by mikim             #+#    #+#             */
/*   Updated: 2020/01/11 15:03:57 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1222. Queens That Can Attack the King [medium]
*/

class Solution {
	public:
		vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& k) {
			vector<vector<int>> res;
			bool q[8][8] = {0};

			for (auto &x : queens) q[x[0]][x[1]] = true;
			for (auto i = -1; i <= 1; ++i) {
				for (auto j = -1; j <= 1; ++j) {
					if (i == 0 && j == 0)
						continue;
					auto x = k[0] + i, y = k[1] + j;
					while (min(x, y) >= 0 && max(x, y) < 8) {
						if (q[x][y]) {
							res.push_back({x, y});
							break;
						}
						x += i;
						y += j;
					}
				}
			}
			return res;
		}
};
