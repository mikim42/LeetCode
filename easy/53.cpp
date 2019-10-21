/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   53.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:13:18 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:13:38 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 53. Maximum Subarray [easy]
*/

class Solution {
	public:
		int maxSubArray(vector<int>& nums) {
			int maxSoFar = nums[0], maxEndingHere = nums[0];

			for (int i = 1; i < nums.size(); ++i) {
				maxEndingHere = max(maxEndingHere + nums[i], nums[i]);
				maxSoFar = max(maxSoFar, maxEndingHere);
			}
			return maxSoFar;
		}
};
