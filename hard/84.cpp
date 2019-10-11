/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   84.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:34:42 by mikim             #+#    #+#             */
/*   Updated: 2019/10/11 12:35:12 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode:  84. Largest Rectangle in Histogram [hard]
*/

class Solution {
	public:
		int largestRectangleArea(vector<int>& h) {
			stack<int> s;
			int r = 0;

			h.push_back(0);
			for (int i = 0; i < h.size(); i++) {
				while (!s.empty() && h[s.top()] > h[i]) {
					int tmp = s.top(); s.pop();
					int prev = s.empty() ? 0 : s.top() + 1;
					r = max(r, h[tmp] * (i - prev));
				}
				s.push(i);
			}
			return r;
		}
};
