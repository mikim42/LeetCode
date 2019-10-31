/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   941.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 11:27:47 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 11:28:40 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 941. Valid Mountain Array [easy]
*/

class Solution {
	public:
		bool validMountainArray(vector<int>& A) {
			int n = A.size();

			if (n < 3)
				return false;
			int i;
			for (i = 0; i < n - 1; i++) {
				if (!(A[i] < A[i + 1]))
					break;
			}
			if (i == 0 || i == n - 1)
				return false;
			for (;i < n - 1; i++) {
				if (!(A[i] > A[i + 1]))
					return false;
			}
			return true;
		}
};
