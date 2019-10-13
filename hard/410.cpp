/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   410.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:34:42 by mikim             #+#    #+#             */
/*   Updated: 2019/10/13 08:58:14 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 410. Split Array Largest Sum [hard]
*/

class Solution {
	public:
		int splitArray(vector<int>& nums, int m) {
			int L = nums.size();
			int S[L + 1] = {0};
			int dp[L] = {0};

			for (int i = 0; i < L; i++)
				S[i + 1] = S[i] + nums[i];


			for (int i = 0; i < L; i++)
				dp[i] = S[L] - S[i];

			for (int s = 1; s < m; s++) {
				for (int i = 0; i < L - s; i++) {
					dp[i] = INT_MAX;
					for (int j = i + 1; j <= L - s; j++) {
						int t = max(dp[j], S[j]-S[i]);
						if (t <= dp[i])
							dp[i] = t;
						else
							break;
					}
				}
			}
			return dp[0];
		}
};
