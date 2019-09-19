/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   509.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:25:53 by mikim             #+#    #+#             */
/*   Updated: 2019/09/18 10:25:57 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 509. Fibonacci Number [easy]
*/

class Solution {
	public:
		//  Recursive
		int fibonacci(int N, int n1, int n2) {
		if (N == 1)
		return n1 + n2;
		return fibonacci(N - 1, n2, n1 + n2);
		}
		int fib(int N) {
		if (N < 3)
		return N != 0;
		return fibonacci(N - 2, 1, 1);

/* ************************************************************************** */

		//  Iterative
		int fib(int N) {
			if (N < 3)
				return N != 0;
			int n1 = 1, n2 = 1;
			while (N-- > 2) {
				int tmp = n2;
				n2 = n1 + n2;
				n1 = tmp;
			}
			return n2;
		}
};
