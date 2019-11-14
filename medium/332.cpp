/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   332.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:09:32 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:11:22 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 332. Reconstruct Itinerary [medium]
*/

class Solution {
	private:
		void DFS(unordered_map<string, multiset<string>> &flight, string airport, vector<string> &result) {
			while (!flight[airport].empty()) {
				multiset<string>::iterator it = flight[airport].begin();
				string next = *it;
				flight[airport].erase(it);
				DFS(flight, next, result);
			}
			result.push_back(airport);
		}

	public:
		vector<string> findItinerary(vector<pair<string, string>> tickets) {
			int n = tickets.size();
			unordered_map<string, multiset<string>> flight;

			for (int i = 0; i < n; i++) {
				flight[tickets[i].first].insert(tickets[i].second);
			}
			vector<string> result;
			DFS(flight, "JFK", result);
			reverse(result.begin(), result.end());
			return result;
		}
};
