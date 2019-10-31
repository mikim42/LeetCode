/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1046.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:26:50 by mikim             #+#    #+#             */
/*   Updated: 2019/10/28 15:27:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	1046. Last Stone Weight [easy]
*/

class Solution {
	public:
		int lastStoneWeight(vector<int>& stones) {
			priority_queue<int> pq(stones.begin(), stones.end());
			while (pq.size() > 1) {
				int s1 = pq.top(); pq.pop();
				int s2 = pq.top(); pq.pop();
				if (s1 - s2 > 0)
					pq.push(s1 - s2);
			}
			return pq.empty() ? 0 : pq.top();
		}
};
