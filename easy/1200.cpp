/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1200.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:09:37 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 11:09:56 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1200. Minimum Absolute Difference [easy]
*/

class Solution {
	public:
		vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
			map<int, vector<vector<int>>> m;
			sort(arr.begin(), arr.end());

			for (int i = 0; i < arr.size(); i++) {
				for (int j = i + 1; j < arr.size(); j++) {
					int diff = abs(arr[i] - arr[j]);
					if (!m.empty() && diff > (*m.begin()).first)
						break ;
					m[diff].push_back(vector<int>{arr[i], arr[j]});
				}
			}
			return (*m.begin()).second;
		}
};
