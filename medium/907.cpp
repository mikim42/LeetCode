/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   907.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:42:58 by mikim             #+#    #+#             */
/*   Updated: 2019/09/12 18:43:31 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 907. [medium] Sum of Subarray Minimums
*/

class Solution {
	public:
		int sumSubarrayMins(vector<int> A) {
			int res = 0, n = A.size(), mod = 1e9 + 7, j, k;
			stack<int> s;
			for (int i = 0; i <= n; ++i) {
				while (!s.empty() && A[s.top()] > (i == n ? 0 : A[i])) {
					j = s.top(); s.pop();
					k = s.empty() ? -1 : s.top();
					res = (res + A[j] * (i - j) * (j - k)) % mod;
				}
				s.push(i);
			}
			return res;
		}
};
