/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   883.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:26:05 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:26:26 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 883. Projection Area of 3D Shapes [easy]
*/

class Solution {
	public:
		int projectionArea(vector<vector<int>>& grid) {
			int cnt = 0;
			int n = grid.size();
			if (n == 0)
				return 0;
			int m = grid[0].size();
			if (m == 0)
				return 0;

			map<int, int> my, mx;

			for (int y = 0; y < n; y++) {
				for (int x = 0; x < m; x++) {
					if (grid[y][x] > 0) cnt++;
					my[y] = max(my[y], grid[y][x]);
					mx[x] = max(mx[x], grid[y][x]);
				}
			}
			for (auto y : my)
				cnt += y.second;
			for (auto x : mx)
				cnt += x.second;
			return cnt;
		}
};
