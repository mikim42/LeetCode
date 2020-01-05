/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   859.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/04 16:41:17 by mikim             #+#    #+#             */
/*   Updated: 2020/01/04 16:41:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 859. Buddy Strings [easy]
*/

class Solution {
	public:
		bool buddyStrings(string A, string B) {
			int cnt[26] = {0};
			bool dup = false;
			int p1, p2;
			int diff = 0;

			if (A.size() != B.size())
				return false;
			for (int i = 0; i < A.size(); i++) {
				cnt[A[i] - 'a']++;
				if (cnt[A[i] - 'a'] > 1)
					dup = true;
				if (A[i] != B[i]) {
					if (diff == 2)
						return false;
					diff == 0 ? (p1 = i) : (p2 = i);
					diff++;
				}
			}
			return (A[p1] == B[p2] && A[p2] == B[p1]) || (diff == 0 && dup);
		}
};
