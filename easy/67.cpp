/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   67.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:12:43 by mikim             #+#    #+#             */
/*   Updated: 2019/10/15 14:12:44 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 67. Add Binary [easy]
*/

class Solution {
	public:
		string addBinary(string a, string b) {
			string r;
			int i = a.size() - 1, j = b.size() - 1;
			int carry = 0;

			while (i >= 0 || j >= 0) {
				int n = 0;
				if (i < 0) {
					n += b[j] - '0' + carry;
					carry = n > 1 ? 1 : 0;
				}
				else if (j < 0) {
					n += a[i] - '0' + carry;
					carry = n > 1 ? 1 : 0;
				}
				else {
					n += a[i] - '0' + b[j] - '0' + carry;
					carry = n > 1 ? 1 : 0;
				}
				r.insert(0, 1, '0' + (n % 2));
				i--;
				j--;
			}
			if (carry)
				r.insert(0, 1, '1');
			return r;
		}
};
