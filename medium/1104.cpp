/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1104.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:24:28 by mikim             #+#    #+#             */
/*   Updated: 2020/01/06 14:25:20 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1104. Path In Zigzag Labelled Binary Tree [medium]
*/

class Solution {
	public:
		vector<int> pathInZigZagTree(int label) {
			int lv = 0;
			while (1 << lv <= label)
				lv++;

			vector<int> vi(lv);
			while (label > 0) {
				vi[lv - 1] = label;
				label = ((1 << lv) - 1 - label + (1 << (lv - 1))) / 2;
				lv--;
			}
			return vi;
		}
};

/*
**	https://leetcode.com/problems/path-in-zigzag-labelled-binary-tree/discuss/323293/C%2B%2B-O(log-n)
*/
