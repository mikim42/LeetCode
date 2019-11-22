/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:44:34 by mikim             #+#    #+#             */
/*   Updated: 2019/11/21 14:44:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 13. Roman to Integer [easy]
*/

class Solution {
	private:
		int getValue(char c) {
			if (c == 'I')
				return (1);
			if (c == 'V')
				return (5);
			if (c == 'X')
				return (10);
			if (c == 'L')
				return (50);
			if (c == 'C')
				return (100);
			if (c == 'D')
				return (500);
			if (c == 'M')
				return (1000);
			return (0);
		}

	public:
		int romanToInt(string s) {
			int n = 0, pre = 1000, val = 0;

			for (int i = 0; i < s.size(); i++) {
				val = getValue(s[i]);
				if (pre < val)
					n += val - (pre * 2);
				else
					n += val;
				pre = val;
			}
			return (n);
		}
};
