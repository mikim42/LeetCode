/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   934.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:30:14 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:12:51 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 934. Shortest Bridge [medium]
*/

class Solution {
	public:
		int paint(vector<vector<int>>& A, int i, int j) {
			if (i < 0 || j < 0 || i == A.size() || j == A.size() || A[i][j] != 1)
				return 0;
			A[i][j] = 2;
			return 1 + paint(A, i + 1, j) + paint(A, i - 1, j) + paint(A, i, j + 1) + paint(A, i, j - 1);
		}

		bool expand(vector<vector<int>>& A, int i, int j, int cl) {
			if (i < 0 || j < 0 || i == A.size() || j == A.size())
				return false;
			if (A[i][j] == 0)
				A[i][j] = cl + 1;
			return A[i][j] == 1;
		}  

		int shortestBridge(vector<vector<int>>& A) {
			for (int i = 0, found = 0; !found && i < A.size(); ++i)
				for (int j = 0; !found && j < A[0].size(); ++j)
					found = paint(A, i, j);
			for (int cl = 2; ; ++cl)
				for (int i = 0; i < A.size(); ++i)
					for (int j = 0; j < A.size(); ++j) 
						if (A[i][j] == cl && ((expand(A, i - 1, j, cl) || expand(A, i, j - 1, cl) || 
							expand(A, i + 1, j, cl) || expand(A, i, j + 1, cl))))
							return cl - 2;
		}
};
