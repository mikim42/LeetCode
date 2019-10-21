/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   26.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:11:13 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:11:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 26. Remove Duplicates from Sorted Array [easy]
*/

class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {
			int n = nums.size();
			int index = 0;

			if (n == 0)
				return 0;
			for (int i = 1; i < n; i++)
				if (nums[i] != nums[index])
					nums[++index] = nums[i];
			return index + 1;
		}
};
