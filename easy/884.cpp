/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   884.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:02:54 by mikim             #+#    #+#             */
/*   Updated: 2020/02/04 13:03:06 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 884. Uncommon Words from Two Sentences [easy]
*/

class Solution {
	private:
		vector<string> strsplit(string s, char del) {
			vector<string> tokens;
			string token;
			istringstream iss(s);

			while (getline(iss, token, del)) {
				tokens.push_back(token);
			}
			return tokens;
		}

	public:
		vector<string> uncommonFromSentences(string A, string B) {
			unordered_map<string, int> m;
			vector<string> split;
			vector<string> res;

			split = strsplit(A, ' ');
			for (auto &x : split)
				m[x]++;
			split = strsplit(B, ' ');
			for (auto &x : split)
				m[x]++;
			for (auto &x : m)
				if (x.second == 1)
					res.push_back(x.first);
			return res;
		}
};
