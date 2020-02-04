/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   953.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:44:47 by mikim             #+#    #+#             */
/*   Updated: 2020/02/04 12:45:02 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 953. Verifying an Alien Dictionary [easy]
*/

class Solution {
	public:
		bool isAlienSorted(vector<string>& words, string order) {
			unordered_map<char, int> m;

			for (int i = 0; i < order.size(); i++)
				m[order[i]] = i;
			for (int i = 1; i < words.size(); i++) {
				int diff = 0;
				for (int j = 0; j < min(words[i - 1].size(), words[i].size()); j++) {
					diff = m[words[i - 1][j]] - m[words[i][j]];
					if (diff > 0)
						return false;
					else if (diff < 0)
						break;
				}
				if (diff == 0 && words[i - 1].size() > words[i].size())
					return false;
			}
			return true;
		}
};
