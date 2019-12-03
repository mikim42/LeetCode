/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   448.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:46:33 by mikim             #+#    #+#             */
/*   Updated: 2019/11/26 14:46:49 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 448. Find All Numbers Disappeared in an Array [easy]
*/

class Solution {
	public:
		vector<int> findDisappearedNumbers(vector<int>& nums) {
			vector<int> v;
			int n = nums.size();

			/*
			 **  Sorting card deck solution
			 */
			for (int i = 0; i < n; i++) {
				while (nums[i] != i + 1 && nums[i] != nums[nums[i] - 1])
					swap(nums[i], nums[nums[i] - 1]);
			}
			for (int i = 0; i < n; i++)
				if (nums[i] != i + 1)
					v.push_back(i + 1);

			/*
			 **  Negating solution
			 */
			for (int i = 0; i < n; i++) {
				nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
			}
			for (int i = 0; i < n; i++) {
				if (nums[i] < 0)
					nums[i] *= 1;
				else
					v.push_back(i + 1);
			}
			return v;
		}
};
