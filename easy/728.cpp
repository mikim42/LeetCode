/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   728.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 09:25:17 by mikim             #+#    #+#             */
/*   Updated: 2020/01/10 09:25:31 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 728. Self Dividing Numbers [easy]
*/

class Solution {
	public:
		vector<int> selfDividingNumbers(int left, int right) {
			vector<int> res;

			for (int i = left; i <= right; i++) {
				int n = i;
				while (n > 0) {
					int tmp = n % 10;
					if (tmp == 0 || i % tmp != 0)
						break;
					n /= 10;
				}
				if (n == 0)
					res.push_back(i);
			}
			return res;
		}
};
