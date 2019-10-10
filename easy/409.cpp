/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   409.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:20:10 by mikim             #+#    #+#             */
/*   Updated: 2019/10/10 14:20:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode:  409. Longest Palindrome [easy]
*/

class Solution {
	public:
		int longestPalindrome(string s) {
			unordered_map<char, int> m;
			int single = 0, doubl = 0;

			for (auto x : s) {
				m[x]++;
			}
			for (auto x : m) {
				if (x.second % 2 == 1)
					single = 1;
				if (x.second > 1) {
					doubl += x.second - (x.second % 2);
				}
			}
			return single + doubl;
		}
};
