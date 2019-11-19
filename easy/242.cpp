/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   242.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:41:58 by mikim             #+#    #+#             */
/*   Updated: 2019/11/19 13:43:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1. 242. Valid Anagram [easy]
*/

class Solution {
	public:
		bool isAnagram(string s, string t) {
			if (s.size() != t.size())
				return false;

			/*
			sort(s.begin(), s.end());
			sort(t.begin(), t.end());
			for (int i = 0; i < s.size(); i++) {
				if (s[i] != t[i])
					return false;
			}
			*/

			unordered_map<char, int> m1;
			unordered_map<char, int> m2;
			for (int i = 0; i < s.size(); i++) {
				m1[s[i]]++;
				m2[t[i]]++;
			}
			for (auto &x : m1)
				if (m2[x.first] != x.second)
					return false;
			return true;
		}
};
