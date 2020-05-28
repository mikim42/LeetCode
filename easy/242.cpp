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
**	LeetCode: 242. Valid Anagram [easy]
*/

class Solution {
	public:
		bool isAnagram(string s, string t) {
			if (s.size() != t.size())
				return false;

			vector<int> cnt(26, 0);
			int res = 0;
			for (int i = 0; i < s.size(); i++)
				cnt[s[i] - 'a']++, cnt[t[i] - 'a']--;
			for (auto x : cnt) if (x) return false;
			return true;
		}
};
