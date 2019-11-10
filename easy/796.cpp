/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   796.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:08:40 by mikim             #+#    #+#             */
/*   Updated: 2019/11/10 15:08:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 796. Rotate String [easy]
*/

class Solution {
	public:
		bool rotateString(string A, string B) {
			if (A.size() != B.size())
				return false;

			int n = A.size();

			if (n == 0)
				return true;

			for (int i = 0; i < n; i++) {
				if (A[0] == B[i]) {
					int j = 1;
					while (j < n) {
						if (A[j] != B[(i + j) % n])
							break ;
						j++;
					}
					if (j == n)
						return true;
				}
			}
			return false;
		}
};
