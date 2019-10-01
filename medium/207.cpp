/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   207.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:43:38 by mikim             #+#    #+#             */
/*   Updated: 2019/09/26 14:43:39 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 207. Course Schedule [medium]
*/

class Solution {
	public:
		bool canTake(vector<int> course[], int visited[], int n) {
			if (visited[n] == 1)
				return false;
			visited[n] = 1;
			for (int i = 0; i < course[n].size(); i++) {
				if (!canTake(course, visited, course[n][i]))
					return false;
			}
			visited[n] = 0;
			return true;
		}

		bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
			vector<int> course[numCourses];

			for (auto x : prerequisites) {
				course[x[0]].push_back(x[1]);
			}

			int visited[numCourses] = {0};
			for (int i = 0; i < numCourses; i++) {
				if (!canTake(course, visited, i))
					return false;
			}
			return true;
		}
};
