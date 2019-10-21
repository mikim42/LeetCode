/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   712.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:14:45 by mikim             #+#    #+#             */
/*   Updated: 2019/10/21 11:15:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 712. Minimum ASCII Delete Sum for Two Strings [medium]
*/

class Solution {
	public:
		int minimumDeleteSum(string s1, string s2) {
			int m = s1.size(), n = s2.size();
			vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
			for (int j = 1; j <= n; j++)
				dp[0][j] = dp[0][j - 1] + s2[j - 1];
			for (int i = 1; i <= m; i++) {
				dp[i][0] = dp[i - 1][0] + s1[i - 1];
				for (int j = 1; j <= n; j++) {
					if (s1[i - 1] == s2[j - 1])
						dp[i][j] = dp[i - 1][j - 1];
					else
						dp[i][j] = min(dp[i - 1][j] + s1[i - 1], dp[i][j - 1] + s2[j - 1]);
				}
			}
			return dp[m][n];
		}
};
