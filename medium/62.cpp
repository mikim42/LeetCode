/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   62.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 22:18:14 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:12:36 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 62. Unique Paths [medium]
*/

class Solution {
	public:
		int uniquePaths(int m, int n) {
			return (getBinomialCoefficient(n-1, m+n-2));
		}
	private:
		int getBinomialCoefficient(int m, int n) {
			unsigned long result = 1;
			if ( m>n-m )
				m=n-m;
			for (unsigned i=0;i<(unsigned)m;++i)
			{
				result *= ((unsigned)(n-i));
				result /= ((unsigned)(i+1));
			}
			return (int)result;
		}
};
