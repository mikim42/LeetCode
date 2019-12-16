/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1207.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:11:34 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:11:56 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1207. Unique Number of Occurrences [easy]
*/

class Solution {
	public:
		bool uniqueOccurrences(vector<int>& arr) {
			unordered_map<int, int> m;
			set<int> s;

			for (int i = 0; i < arr.size(); i++)
				m[arr[i]]++;
			for (auto &x : m) {
				if (!s.insert(x.second).second)
					return false;
			}
			return true;
		}
};
