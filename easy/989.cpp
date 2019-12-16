/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   989.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:08:35 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:10:37 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 989. Add to Array-Form of Integer [easy]
*/

class Solution {
	public:
		vector<int> addToArrayForm(vector<int>& A, int K) {
			vector<int> vi;
			int n = A.size() - 1;
			int carry = 0;

			while (K > 0 || carry == 1 || n >= 0) {
				int tmp;
				if (n >= 0) {
					tmp = A[n] + (K % 10) + carry;
					vi.push_back(tmp % 10);
				}
				else {
					tmp = (K % 10) + carry;
					vi.push_back(tmp % 10);
				}
				if (tmp >= 10)
					carry = 1;
				else
					carry = 0;
				K /= 10;
				n--;
			}
			reverse(vi.begin(), vi.end());
			return vi;
		}
};
