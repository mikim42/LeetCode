/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   896.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 14:11:08 by mikim             #+#    #+#             */
/*   Updated: 2019/12/07 14:11:26 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 896. Monotonic Array [easy]
*/

class Solution {
	public:
		bool isMonotonic(vector<int>& A) {
			bool inc = false, dec = false;
			int n = A.size();

			for (int i = 1; i < n; i++) {
				if (A[i - 1] < A[i])
					inc = true;
				else if (A[i - 1] > A[i])
					dec = true;
			}
			return !(inc & dec);
		}
};
