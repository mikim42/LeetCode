/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   229.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 09:58:33 by mikim             #+#    #+#             */
/*   Updated: 2019/10/06 09:58:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 229. Majority Element II [medium]
*/

class Solution {
	public:
		vector<int> majorityElement(vector<int>& nums) {
			map<int, int> m;
			set<int> s;
			int n = nums.size();

			for (auto x : nums) {
				m[x]++;
				if (m[x] > n / 3)
					s.insert(x);
			}
			vector<int> res(s.begin(), s.end());
			return res;
		}
};
