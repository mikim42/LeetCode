/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:38:35 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 12:39:00 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1. Two Sum [easy]
*/

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			map<int, int> m;

			for (int i = 0; i < nums.size(); i++) {
				m[nums[i]] = i;
			}
			for (int i = 0; i < nums.size(); i++) {
				auto key = m.find(target - nums[i]);
				if (key != m.end() && (*key).second != i)
					return vector<int>{(*key).second, i};
			}
			return vector<int>{0,0};
		}
};
