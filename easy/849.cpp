/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   849.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:22:18 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:22:44 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 849. Maximize Distance to Closest Person [easy]
*/

class Solution {
	public:
		int maxDistToClosest(vector<int>& seats) {
			int n = seats.size(), i = 0, cnt = 0, dist = 0;

			while (seats[i] == 0) {
				dist++;
				i++;
			}
			while (i < n) {
				if (seats[i] == 1) {
					dist = max(dist, (cnt / 2) + (cnt % 2));
					cnt = 0;
				}
				else
					cnt++;
				i++;
			}
			dist = max(dist, cnt);
			return dist;
		}
};
