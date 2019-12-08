/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1122.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 15:04:10 by mikim             #+#    #+#             */
/*   Updated: 2019/12/08 15:04:28 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1122. Relative Sort Array [easy]
*/

class Solution {
	public:
		vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
			vector<int> v;
			unordered_map<int, int> mp;
			map<int, int> s_mp;
			int n = arr1.size(), m = arr2.size();

			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					if (arr2[i] == arr1[j])
						v.push_back(arr1[j]);
				}
			}
			for (int i = 0; i < n; i++) {
				auto x = arr2.end();
				if ((x = find(arr2.begin(), arr2.end(), arr1[i])) == arr2.end())
					s_mp[arr1[i]]++;
			}
			for (auto &x : s_mp)
				for (int i = 0; i < x.second; i++)
					v.push_back(x.first);
			return v;
		}
};
