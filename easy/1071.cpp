/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1071.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:09:11 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 11:10:46 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1071. Greatest Common Divisor of Strings [easy]
*/

class Solution {
	public:
		string gcdOfStrings(string str1, string str2) {
			while (!str2.empty()) {
				if (str1.size() < str2.size())
					swap(str1, str2);
				if (str1.substr(0, str2.size()) != str2)
					return "";
				str1 = str1.substr(str2.size());
			}
			return str1;
		}
};
