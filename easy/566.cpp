/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   566.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:38:46 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:11:40 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 566. Reshape the Matrix [easy]
*/

class Solution {
	public:
		vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
			if (nums.size() * nums[0].size() != r * c)
				return nums;

			vector<vector<int>>	res;
			vector<int>			tmp;
			int					x = 0, y = 0;

			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					tmp.push_back(nums[y][x++]);
					if (x >= nums[0].size()) {
						x = 0;
						y++;
					}                    
				}
				res.push_back(tmp);
				tmp.clear();
			}
			return res;
		}
};
