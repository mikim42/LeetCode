/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   628.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:32:57 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 18:36:12 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 628. [easy] Maximum Product of Three Numbers
*/

class Solution {
	public:
		int maximumProduct(vector<int>& nums) {
			sort(nums.begin(), nums.end());
			int size = nums.size();
			if (nums[0] * nums[1] * nums[size - 1] > 
					nums[size - 1] * nums[size - 2] * nums[size - 3])
				return nums[0] * nums[1] * nums[size - 1];
			else
				return nums[size - 1] * nums[size - 2] * nums[size - 3];
		}
};
