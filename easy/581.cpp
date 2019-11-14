/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   581.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:08:21 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:08:38 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 581. Shortest Unsorted Continuous Subarray [easy]
*/

class Solution {
	public:
		int findUnsortedSubarray(vector<int>& nums) {
			int n = nums.size();
			int st = 0, end = -1;
			int max = nums[0], min = nums[n - 1];

			for (int i = 0; i < n; i++) {
				nums[i] >= max ? max = nums[i] : end = i;
				nums[n - 1 - i] <= min ? min = nums[n - 1 - i] : st = n - 1 - i;
			}
			return end - st + 1;
		}
};
