/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1013.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:00:08 by mikim             #+#    #+#             */
/*   Updated: 2020/02/04 13:00:25 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1013. Partition Array Into Three Parts With Equal Sum [easy]
*/

class Solution {
	public:
		bool canThreePartsEqualSum(vector<int>& A) {
			int sum = 0, tmp = 0, cnt = 0;
			for (auto x : A)
				sum += x;
			if (sum % 3 != 0)
				return false;
			for (auto x : A) {
				tmp += x;
				if  (tmp == sum / 3)
					tmp = 0, cnt++;
			}
			return tmp == 0 && cnt == 3;
		}
};
