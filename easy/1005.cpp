/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1005.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:04:47 by mikim             #+#    #+#             */
/*   Updated: 2020/01/06 10:05:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1005. Maximize Sum Of Array After K Negations [easy]
*/

class Solution {
	public:
		int largestSumAfterKNegations(vector<int>& A, int K) {
			int res = 0;

			sort(A.begin(), A.end());
			for (int i = 0; i < K; i++) {
				if (i == 0 || A[i] < 0)
					A[i] *= -1;
				else if (A[i] == 0)
					break;
				else if (A[i] > 0) {
					if (i > 0 && A[i - 1] > A[i])
						A[i] *= -1;
					else
						A[i - 1] *= -1;
					i--;
					K--;
				}
			}
			for (auto &x : A)
				res += x;
			return res;
		}
};
