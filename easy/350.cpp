/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   350.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:24:25 by mikim             #+#    #+#             */
/*   Updated: 2019/12/14 17:24:28 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 350. Intersection of Two Arrays II [easy]
*/

class Solution {
	public:
		vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
			vector<int> v;

			sort(nums1.begin(), nums1.end());
			sort(nums2.begin(), nums2.end());

			int p1 = 0, p2 = 0;
			while (p1 < nums1.size() && p2 < nums2.size()) {
				if (nums1[p1] == nums2[p2]) {
					v.push_back(nums1[p1]);
					p1++;
					p2++;
				}
				else
					nums1[p1] > nums2[p2] ? p2++ : p1++;
			}
			return v;
		}
};
