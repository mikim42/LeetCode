/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   35.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 17:45:13 by mikim             #+#    #+#             */
/*   Updated: 2019/11/17 17:46:01 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 35. Search Insert Position [easy]
*/

class Solution {
	public:
		int searchInsert(vector<int>& nums, int target) {
			int n = nums.size();
			int i;

			for (i = 0; i < n && nums[i] < target; i++);
			return i;
		}
};
