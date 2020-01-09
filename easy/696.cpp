/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   696.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 01:18:16 by mikim             #+#    #+#             */
/*   Updated: 2020/01/09 01:18:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 696. Count Binary Substrings [easy]
*/

class Solution {
	public:
		int countBinarySubstrings(string s) {
			int res = 0, c0 = 0, c1 = 0;
			bool sw = true;

			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '0') {
					if (sw) {
						sw = false;
						res += min(c0, c1);
						c0 = 0;
					}
					c0++;
				}
				else {
					if (!sw) {
						sw = true;
						res += min(c0, c1);
						c1 = 0;
					}
					c1++;
				}
			}
			return res + min(c0, c1);
		}
};
