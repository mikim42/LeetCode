/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1078.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:16:49 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:17:32 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1078. Occurrences After Bigram [easy]
*/

class Solution {
	public:
		vector<string> findOcurrences(string text, string first, string second) {
			stringstream ss(text);
			string split;
			vector<string> vs;
			bool fst = false, snd = false;

			while (ss >> split) {
				if (snd) {
					vs.push_back(split);
					if (split != first)
						fst = false;
					snd = false;
				}
				else if (fst && split == second)
					snd = true;
				else if (split == first)
					fst = true;
				else {
					fst = false;
					snd = false;
				}
			}
			return vs;
		}
};
