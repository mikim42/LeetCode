/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:40:21 by mikim             #+#    #+#             */
/*   Updated: 2019/10/31 12:41:09 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 2. Add Two Numbers [easy]
*/

class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode *res = NULL;
			ListNode *it = NULL;
			ListNode *tmp = NULL;
			int carry = 0;

			while (l1 || l2 || carry) {
				tmp = new ListNode(carry);
				carry = 0;
				if (l1) {
					tmp->val += l1->val;
					l1 = l1->next;
				}
				if (l2) {
					tmp->val += l2->val;
					l2 = l2->next;
				}
				carry = tmp->val >= 10 ? 1 : 0;
				tmp->val %= 10;
				if (!res) {
					res = tmp;
					it = res;
				}
				else {
					it->next = tmp;
					it = it->next;
				}
			}
			return res;
		}
};
