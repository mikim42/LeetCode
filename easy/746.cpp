/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   746.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:27:48 by mikim             #+#    #+#             */
/*   Updated: 2020/02/04 12:28:03 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 746. Min Cost Climbing Stairs [easy]
*/

class Solution {
	public:
		int minCostClimbingStairs(vector<int>& cost) {
			int prev = 0, curr = 0;

			for (auto x : cost) {
				int tmp = x + min(curr, prev);
				prev = curr;
				curr = tmp;
			}
			return min(prev, curr);
		}
};
