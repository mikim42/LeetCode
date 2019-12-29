/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   392.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:05:23 by mikim             #+#    #+#             */
/*   Updated: 2019/12/28 16:05:40 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 392. Is Subsequence [easy]
*/

class Solution {
	public:
		bool isSubsequence(string s, string t) {
			int i = 0, j = 0;

			if (s.empty())
				return true;
			if (s.size() > t.size())
				return false;
			while (i < t.size()) {
				if (s[j] == t[i]) {
					j++;
					if (j == s.size())
						return true;
				}
				i++;
			}
			return false;
		}
};
