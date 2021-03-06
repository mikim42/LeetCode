/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   198.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:33:33 by mikim             #+#    #+#             */
/*   Updated: 2020/01/29 13:33:54 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 198. House Robber [easy]
*/

class Solution {
	public:
		int rob(vector<int>& nums) {
			int prev = 0, curr = 0;
			for (int i = 0; i < nums.size(); i++) {
				int tmp = max(prev + nums[i], curr);
				prev = curr;
				curr = tmp;
			}
			return curr;
		}
};
