/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   860.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:59:57 by mikim             #+#    #+#             */
/*   Updated: 2019/10/15 11:59:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 860. Lemonade Change [easy]
*/

class Solution {
	public:
		bool lemonadeChange(vector<int>& bills) {
			int change[3] = {0};

			for (auto x : bills) {
				if (x == 5)
					change[0]++;
				else if (x == 10) {
					change[0]--;
					change[1]++;
				}
				else if (x == 20) {
					if (change[1] > 0) {
						change[1]--;
						change[0]--;
					}
					else
						change[0] -= 3;
				}
				if (change[0] < 0)
					return false;
			}
			return true;
		}
};
