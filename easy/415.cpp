/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   415.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:26:50 by mikim             #+#    #+#             */
/*   Updated: 2019/11/14 15:27:13 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 415. Add Strings [easy]
*/

class Solution {
	public:
		string addStrings(string num1, string num2) {
			if (num1.size() < num2.size())
				return addStrings(num2, num1);

			int n1 = num1.size() - 1;
			int n2 = num2.size() - 1;
			int carry = 0;

			int i;
			for (i = 0; i <= n2; i++) {
				carry += num1[n1 - i] + num2[n2 - i] - 2 * '0';
				num1[n1 - i] = carry % 10 + '0';
				carry /= 10;
			}
			while (carry) {
				if (n1 >= i) {
					carry += num1[n1 - i] - '0';
					num1[n1 - i] = carry % 10 + '0';
					carry /= 10;
					i++;
				}
				else {
					num1.insert(num1.begin(), '1');
					carry = 0;
				}
			}
			return num1;
		}
};
