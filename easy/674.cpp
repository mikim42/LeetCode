/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   674.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:34:55 by mikim             #+#    #+#             */
/*   Updated: 2020/01/22 12:35:07 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 674. Longest Continuous Increasing Subsequence [easy]
*/

class Solution {
	public:
		int findLengthOfLCIS(vector<int>& nums) {
			int res = 0, cnt = 1;

			if (nums.size() == 0)
				return 0;
			for (int i = 1; i < nums.size(); i++) {
				if (nums[i] > nums[i - 1])
					cnt++;
				else {
					res = max(res, cnt);
					cnt = 1;
				}
			}
			return max(res, cnt);
		}
};
