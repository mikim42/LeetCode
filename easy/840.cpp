/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   840.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:17:43 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:21:33 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 840. Magic Squares In Grid [easy]
*/

class Solution {
	public:
		int rowSum(vector<vector<int>>& grid, int r, int c) {
			return grid[r][c] + grid[r][c + 1] + grid[r][c + 2];
		}

		int colSum(vector<vector<int>>& grid, int r, int c) {
			return grid[r][c] + grid[r + 1][c] + grid[r + 2][c];
		}

		bool diagSum(vector<vector<int>>& grid, int r, int c) {
			return grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] ==
				grid[r + 2][c] + grid[r + 1][c + 1] + grid[r][c + 2];
		}

		bool magicSquare(vector<vector<int>>& grid, int r, int c) {
			unordered_map<int, int> m;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (grid[r + i][c + j] < 1 || grid[r + i][c + j] > 9 ||
						++m[grid[r + i][c + j]] > 1)
						return false;
				}
			}
			return true;
		}

		int numMagicSquaresInside(vector<vector<int>>& grid) {
			int height = grid.size();
			int width = grid[0].size();
			int cnt = 0;

			if (height < 3 || width < 3)
				return 0;
			for (int i = 0; i < height - 2; i++) {
				for (int j = 0; j < width - 2; j++) {
					if (!magicSquare(grid, i, j) || !diagSum(grid, i, j) ||
							rowSum(grid, i, j) != rowSum(grid, i + 1, j) ||
							rowSum(grid, i, j) != rowSum(grid, i + 2, j) ||
							colSum(grid, i, j) != colSum(grid, i, j + 1) ||
							colSum(grid, i, j) != colSum(grid, i, j + 2))
						continue;
					else
						cnt++;
				}
			}
			return cnt;
		}
};
