/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   867.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:21:37 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 12:21:52 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 867. Transpose Matrix [easy]
*/

class Solution {
	public:
		vector<vector<int>> transpose(vector<vector<int>>& A) {
			int n = A.size();
			int m = A[0].size();

			vector<vector<int>> B(m, vector<int>(n));
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					B[j][i] = A[i][j];
				}
			}
			return B;
		}
};
