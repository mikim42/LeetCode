/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1103.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:02:26 by mikim             #+#    #+#             */
/*   Updated: 2020/02/13 16:04:22 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	1103. Distribute Candies to People [easy]
*/

class Solution {
	private:
		int sum(int n) { return n * (n + 1) / 2; }
	public:
		vector<int> distributeCandies(int c, int n) {
			vector<int> v(n);

			for (int i = 1; i <= n; i++) {
				int tmp = sum(j * n + i);
				for (int j = 0; tmp <= c; j++) {
					v[i - 1] += i + j * n;
					if (tmp < c && c < tmp + j * n + i + 1)
						v[i % n] += c - tmp;
					tmp = sum(j * n + i);
				}
			}
			return v;
		}
}
