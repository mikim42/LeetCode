/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1290.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 12:54:17 by mikim             #+#    #+#             */
/*   Updated: 2020/01/14 12:54:38 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 1290. Convert Binary Number in a Linked List to Integer [easy]
*/

class Solution {
	public:
		int getDecimalValue(ListNode* head) {
			int res = 0;

			while (head) {
				res = (res << 1) + head->val;
				head = head->next;
			}
			return res;
		}
};
