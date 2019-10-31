/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   447.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:00:42 by mikim             #+#    #+#             */
/*   Updated: 2019/10/28 14:01:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 447. Number of Boomerangs [easy]
*/

class Solution {
	public:
		int numberOfBoomerangs(vector<vector<int>>& points) {
			int booms = 0;
			for (auto &p : points) {
				unordered_map<int, int> ctr(points.size());
				for (auto &q : points)
					booms += 2 * ctr[pow((p[0] - q[0]), 2) + pow((p[1] - q[1]), 2)]++;
			}
			return booms;
		}
};
