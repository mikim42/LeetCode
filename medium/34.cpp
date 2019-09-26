/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   34.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:47:39 by mikim             #+#    #+#             */
/*   Updated: 2019/09/26 13:48:09 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 34. Find First and Last Position of Element in Sorted Array [medium]
*/

class Solution {
	public:
		int bsearch(vector<int>& nums, int target, int l, int r) {
			int m;
			while (l <= r) {
				m = (l + r) / 2;
				if (nums[m] < target)
					l = m + 1;
				else if (nums[m] > target)
					r = m - 1;
				else
					return m;
			}
			return -1;
		}

		vector<int> searchRange(vector<int>& nums, int target) {
			int n = bsearch(nums, target, 0, nums.size() - 1);
			int tmp = n;
			vector<int> res{n, n};

			while ((tmp = bsearch(nums, target, 0, tmp - 1)) != -1)
				res[0] = tmp;
			tmp = n;
			while ((tmp = bsearch(nums, target, tmp + 1, nums.size() - 1)) != -1)
				res[1] = tmp;
			return res;
		}
};
