/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   268.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:23:43 by mikim             #+#    #+#             */
/*   Updated: 2020/01/23 18:24:00 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 268. Missing Number [easy]
*/

class Solution {
	public:
		int missingNumber(vector<int>& nums) {
			int res = 0;
			for (int i = 0; i < nums.size(); i++) {
				res ^= nums[i];
				res ^= (i + 1);
			}
			return res;
		}
};
