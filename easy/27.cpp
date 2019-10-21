/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   27.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:11:57 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:12:28 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 27. Remove Element [easy]
*/

class Solution {
	public:
		int removeElement(vector<int>& nums, int val) {
			int n = nums.size();
			int index = 0;

			for (int i = 0; i < n; i++) {
				if (nums[i] != val) {
					swap(nums[index], nums[i]);
					index++;
				}
			}
			return index;
		}
};
