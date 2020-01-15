/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1128.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:47:49 by mikim             #+#    #+#             */
/*   Updated: 2020/01/15 09:48:03 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1128. Number of Equivalent Domino Pairs [easy]
*/

class Solution {
	public:
		int numEquivDominoPairs(vector<vector<int>>& dominoes) {
			unordered_map<int, int> m;
			int res = 0;

			for (auto x : dominoes) {
				res += m[min(x[0], x[1]) * 10 + max(x[0], x[1])]++;
			}
			return res;
		}
};
