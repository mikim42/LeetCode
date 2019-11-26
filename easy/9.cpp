/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:37:18 by mikim             #+#    #+#             */
/*   Updated: 2019/11/21 14:37:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 9. Palindrome Number [easy]
*/

class Solution {
	public:
		bool isPalindrome(int x) {
			if (x < 0)
				return false;

			long n = x;
			long rev = 0;
			while (x) {
				rev = rev * 10 + (x % 10);
				x /= 10;
			}
			return n == rev;
		}
};