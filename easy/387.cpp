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
			int letters[26] = {0}, n = s.size();
			for (auto x : s) ++letters[x - 'a'];
			for (int i = 0; i < n; ++i) if (letters[s[i] - 'a'] == 1) return i;
			return -1;
		}
};
