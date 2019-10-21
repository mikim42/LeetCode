/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   345.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:06:58 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:08:37 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 345. Reverse Vowels of a String [easy]
*/

class Solution {
	public:
		const string VOWEL = "aeiouAEIOU";

		string reverseVowels(string s) {
			int i = 0;
			int j = s.size() - 1;

			while (i < j) {
				while (i < j && VOWEL.find(s[i]) == string::npos)
					i++;
				while (i < j && VOWEL.find(s[j]) == string::npos)
					j--;
				if (i < j) {
					s[i] ^= s[j]; s[j] ^= s[i]; s[i] ^= s[j];
					i++;
					j--;
				}
			}
			return s;
		}
};
