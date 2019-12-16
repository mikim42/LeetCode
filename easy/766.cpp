/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   766.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:12:56 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:13:12 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 766. Toeplitz Matrix [easy]
*/

class Solution {
	public:
		bool isToeplitzMatrix(vector<vector<int>>& matrix) {
			for (int i = 1; i < matrix.size(); i++) {
				for (int j = 1; j < matrix[i].size(); j++) {
					if (matrix[i][j] != matrix[i - 1][j - 1])
						return false;
				}
			}
			return true;
		}
};
