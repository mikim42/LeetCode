/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1331.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:43:58 by mikim             #+#    #+#             */
/*   Updated: 2020/01/26 15:44:18 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1331. Rank Transform of an Array [easy]
*/

class Solution {
	public:
		vector<int> arrayRankTransform(vector<int>& arr) {
			unordered_map<int, int> m;
			set<int> s;

			for (auto x : arr)
				s.insert(x);
			int i = 1;
			for (auto x : s)
				m[x] = i++;
			for (int i = 0; i < arr.size(); i++)
				arr[i] = m[arr[i]];
			return arr;
		}
};
