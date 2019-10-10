/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   824.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:36:44 by mikim             #+#    #+#             */
/*   Updated: 2019/10/10 14:39:33 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode:  824. Goat Latin [easy]
*/

class Solution {
	public:
		string toGoatLatin(string S) {
			stringstream s(S);
			vector<string> v;
			string vowel = "aeiouAEIOU";

			while (s >> S) {
				v.push_back(S);
			}
			S.clear();
			for (int i = 0; i < v.size(); i++) {
				if (vowel.find(v[i][0]) == string::npos)
					S += v[i].substr(1, v[i].size() - 1) + v[i][0];
				else
					S += v[i];
				S += "maa";
				for (int j = 0; j < i; j++) {
					S += "a";
				}
				S += " ";
			}
			S.erase(S.size() - 1, 1);
			return S;
		}
};
