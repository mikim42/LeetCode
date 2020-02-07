/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1010.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:33:07 by mikim             #+#    #+#             */
/*   Updated: 2020/02/07 12:33:17 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1010. Pairs of Songs With Total Durations Divisible by 60 [easy]
*/

class Solution {
	public:
		int numPairsDivisibleBy60(vector<int>& time) {
			vector<int> counter(60);
			int res = 0;

			for (auto x : time) {
				res += counter[(60 - x % 60) % 60];
				counter[x % 60] += 1;
			}
			return res;
		}
};
