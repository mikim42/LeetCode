/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   784.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 12:10:24 by mikim             #+#    #+#             */
/*   Updated: 2019/11/21 12:10:42 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 784. Letter Case Permutation [easy]
*/

class Solution {
	private:
		void letterCasePermutation(vector<string> &v, string &s, int pos) {
			if (pos == s.size()) {
				v.push_back(s);
				return ;
			}
			if (isalpha(s[pos])) {
				letterCasePermutation(v, s, pos + 1);
				s[pos] ^= 32;
				letterCasePermutation(v, s, pos + 1);
				s[pos] ^= 32;
			}
			else {
				letterCasePermutation(v, s, pos + 1);
			}
		}

	public:
		vector<string> letterCasePermutation(string S) {
			vector<string> v;

			letterCasePermutation(v, S, 0);
			return v;
		}
};
