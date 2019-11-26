/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   125.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 14:43:23 by mikim             #+#    #+#             */
/*   Updated: 2019/11/26 14:43:44 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 125. Valid Palindrome [easy]
*/

class Solution {
	public:
		bool isPalindrome(string s) {
			if (s.empty())
				return true;

			int n = s.size();
			int i = 0, j = n - 1;

			while (i < j) {
				while (i < n && !isalnum(s[i]))
					i++;
				while (j >= 0 && !isalnum(s[j]))
					j--;
				if (!(i < j))
					break;
				s[i] |= 32;
				s[j] |= 32;
				if (!(i < j && s[i] == s[j]))
					return false;
				i++;
				j--;
			}
			return true;
		}
};
