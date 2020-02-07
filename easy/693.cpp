/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   693.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:57:57 by mikim             #+#    #+#             */
/*   Updated: 2020/02/07 12:58:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 693. Binary Number with Alternating Bits [easy]
*/

class Solution {
	public:
		bool hasAlternatingBits(int n) {
			while (n > 0) {
				if (n % 2 == (n >> 1) % 2)
					return false;
				n /= 2;
			}
			return true;
		}
};

https://leetcode.com/problems/binary-number-with-alternating-bits/discuss/108427/Oneliners-(C%2B%2B-Java-Ruby-Python)
