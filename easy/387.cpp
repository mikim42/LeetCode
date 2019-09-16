/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   387.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 08:31:10 by mikim             #+#    #+#             */
/*   Updated: 2019/09/16 08:31:49 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 387. First Unique Character in a String [easy]
*/

class Solution {
	public:
		int firstUniqChar(string s) {
			queue<char> q;
			int let[26] = {0};

			for (int i = 0; i < s.length(); i++) {
				if (let[s[i] - 97] == 0) {
					let[s[i] - 97] = i + 1;
					q.push(s[i]);
				}
				else
					let[s[i] - 97] = -1;
			}
			while (!q.empty()) {
				char c = q.front(); q.pop();
				if (let[c - 97] > 0)
					return let[c - 97] - 1;
			}
			return -1;
		}
};
