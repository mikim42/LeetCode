/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1184.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:01:41 by mikim             #+#    #+#             */
/*   Updated: 2019/09/19 13:02:08 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1184. Distance Between Bus Stops [easy]
*/

class Solution {
	public:
		int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
			int d1 = 0, d2 = 0, n = distance.size();
			bool trigger = true;

			for (int i = 0; i < n; i++) {
				if (trigger) {
					d1 += distance[(start + i) % n];
				}
				else
					d2 += distance[(start + i) % n];
				if ((i + start + 1) % n == destination)
					trigger = false;
			}
			return min(d1, d2);
		}
};
