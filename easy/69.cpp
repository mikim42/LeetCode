/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   69.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:14:04 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 10:14:23 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 69. Sqrt(x) [easy]
*/

class Solution {
	public:
		int mySqrt(int x) {
			long sqr = x;

			while (sqr * sqr > x)
				sqr = (sqr + x / sqr) / 2;
			return sqr;
		}
};