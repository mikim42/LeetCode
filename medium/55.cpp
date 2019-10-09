/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   55.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:37:44 by mikim             #+#    #+#             */
/*   Updated: 2019/10/08 14:45:39 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 131. 55. Jump Game [medium]
*/

class Solution {
	public:
		int maxJump(vector<int>& nums, int n) {
			int max = n + nums[n];
			int index = n;
			for (int i = 1; i <= nums[n] && n + i < nums.size(); i++) {
				if (max < (n + i) + nums[n + i]) {
					max = (n + i) + nums[n + i];
					index = n + i;
				}
			}
			return index;
		}

		bool canJump(vector<int>& nums) {
			int n = 0, prev = 0;
			while (n + nums[n] < nums.size() - 1) {
				prev = n;
				n = maxJump(nums, n);
				if (prev == n)
					return false;
			}
			return true;
		}
};
