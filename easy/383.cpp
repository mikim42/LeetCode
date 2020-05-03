/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   383.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:56:09 by mikim             #+#    #+#             */
/*   Updated: 2019/11/26 13:56:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 383. Ransom Note [easy]
*/

class Solution {
	public:
		bool canConstruct(string ransomNote, string magazine) {
			int cnt[26] = {0};

			for (auto x : ransomNote) --cnt[x - 'a'];
			for (auto x : magazine) ++cnt[x - 'a'];
			for (int i = 0; i < 26; ++i) if (cnt[i] < 0) return false;
			return true;
		}
};
