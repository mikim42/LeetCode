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
			int let[26] = {0};
			int n = max(magazine.size(), ransomNote.size());

			for (int i = 0; i < n; i++) {
				if (i < ransomNote.size())
					let[ransomNote[i] - 'a']--;
				if (i < magazine.size())
					let[magazine[i] - 'a']++;
			}
			for (int i = 0; i < 26; i++) {
				if (let[i] < 0)
					return false;
			}
			return true;
		}
};
