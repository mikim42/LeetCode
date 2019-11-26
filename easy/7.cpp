/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:13:58 by mikim             #+#    #+#             */
/*   Updated: 2019/11/21 14:14:10 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 7. Reverse Integer [easy]
*/

class Solution {
	public:
		int reverse(int x) {
			long n = 0;

			while (x > 0) {
				n *= 10;
				n += x % 10;
				x /= 10;
			}
			return INT_MIN <= n && n <= INT_MAX ? (int)n : 0;
		}
};