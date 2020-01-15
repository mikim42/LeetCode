/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   914.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:28:04 by mikim             #+#    #+#             */
/*   Updated: 2020/01/11 15:28:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 914. X of a Kind in a Deck of Cards [easy]
*/

class Solution {
	private:
		int gcd(int a, int b) {
			if (a == 0)
				return b;
			else if ( b == 0)
				return a;
			while (a != b) {
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			return a;
		}

	public:
		bool hasGroupsSizeX(vector<int>& deck) {
			unordered_map<int, int> m;
			int res = 0;

			for (auto x : deck) {
				m[x]++;
			}
			for (auto x : m) {
				res = gcd(res, x.second);
			}
			return res > 1;
		}
};
