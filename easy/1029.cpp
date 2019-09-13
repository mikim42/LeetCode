/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1029.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:29:24 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 18:29:44 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1029. [easy] Two City Scheduling
*/

class Solution {
	public:
		int twoCitySchedCost(vector<vector<int>>& costs) {
			sort(costs.begin(), costs.end(), [](auto &a, auto &b) {
					return abs(a[0] - a[1]) > abs(b[0] - b[1]);
					}
				);

			int n = costs.size() / 2, a = 0, b = 0, sum = 0;
			for (auto x : costs) {
				if ((a < n && x[0] < x[1]) || b == n) {
					sum += x[0];
					a++;
				}
				else if ((b < n && x[0] > x[1]) || a == n) {
					sum += x[1];
					b++;
				}
			}
			return sum;
		}
};
