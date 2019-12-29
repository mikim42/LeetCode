/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   697.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:00:11 by mikim             #+#    #+#             */
/*   Updated: 2019/12/28 16:00:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 697. Degree of an Array [easy]
*/

class Solution {
	public:
		int findShortestSubArray(vector<int>& nums) {
			unordered_map<int, int> idx;
			unordered_map<int, int> cntr;
			int res = 1;
			int deg = 0;

			for (int i = 0; i < nums.size(); i++) {
				cntr[nums[i]]++;
				if (cntr[nums[i]] == 1)
					idx[nums[i]] = i;
				if (deg == cntr[nums[i]])
					res = min(res, i - idx[nums[i]] + 1);
				else if (deg < cntr[nums[i]]) {
					deg = cntr[nums[i]];
					res = i - idx[nums[i]] + 1;
				}
			}
			return res;
		}
};
