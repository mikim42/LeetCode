/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   190.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:07:51 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:08:09 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 190. Reverse Bits [easy]
*/

class Solution {
	public:
		uint32_t reverseBits(uint32_t n) {
			uint32_t r = 0;
			uint32_t mask = 0x80000000;

			for (int i = 0; i < 32; i++) {
				r /= 2;
				r += mask & n;
				n <<= 1;
			}
			return r;
		}
};
