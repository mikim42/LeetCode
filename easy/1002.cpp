/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1002.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 15:38:45 by mikim             #+#    #+#             */
/*   Updated: 2020/01/02 15:39:00 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1002. Find Common Characters [easy]
*/

class Solution {
	public:
		vector<string> commonChars(vector<string>& A) {
			vector<string> res;
			vector<int> coms(26, INT_MAX);

			for (auto &x : A) {
				vector<int> cnt(26, 0);
				for (auto &y : x)
					cnt[y - 'a']++;
				for (int i = 0; i < 26; i++)
					coms[i] = min(coms[i], cnt[i]);
			}
			for (int i = 0; i < 26; i++) {
				for (int j = 0; j < coms[i]; j++)
					res.push_back(string{i + 'a'});
			}
			return res;
		}
};
