/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   520.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 16:00:57 by mikim             #+#    #+#             */
/*   Updated: 2019/12/28 16:01:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 520. Detect Capital [easy]
*/

class Solution {
	public:
		bool detectCapitalUse(string word) {
			if (word.empty())
				return true;
			int i = 0;
			while (i < word.size())
				if (isupper(word[++i])) break;
			if (i == 1 && isupper(word[0]))
				while (i < word.size())
					if (islower(word[i++])) return false;
			if (i == word.size()) return true;
			else return false;
		}
};
