/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   994.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 23:03:55 by mikim             #+#    #+#             */
/*   Updated: 2020/01/05 23:04:14 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 994. Rotting Oranges [easy]
*/

class Solution {
	public:
		int orangesRotting(vector<vector<int>>& grid) {
			queue<pair<int, int>> q;
			int res = 0;
			int depth = 1;
			int n = 0;

			for (int i = 0; i < grid.size(); i++) {
				for (int j = 0; j < grid[i].size(); j++) {
					if (grid[i][j] == 2) {
						q.push(pair<int, int>(i + 1, j));
						q.push(pair<int, int>(i - 1, j));
						q.push(pair<int, int>(i, j + 1));
						q.push(pair<int, int>(i, j - 1));
					}
				}
			}
			n = q.size();
			while (!q.empty()) {
				pair<int, int> tmp = q.front(); q.pop();
				n--;
				if (n < 0) {
					n = q.size();
					depth++;
				}
				if (tmp.first < 0 || tmp.first >= grid.size() ||
						tmp.second < 0 || tmp.second >= grid[tmp.first].size() ||
						grid[tmp.first][tmp.second] != 1)
					continue;
				res = depth;
				grid[tmp.first][tmp.second] = 2;
				q.push(pair<int, int>(tmp.first + 1, tmp.second));
				q.push(pair<int, int>(tmp.first - 1, tmp.second));
				q.push(pair<int, int>(tmp.first, tmp.second + 1));
				q.push(pair<int, int>(tmp.first, tmp.second - 1));
			}

			for (auto &x : grid) {
				for (auto &y : x)
					if (y == 1) return -1;
			}
			return res;
		}
};
