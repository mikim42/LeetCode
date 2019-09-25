/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimminseok <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:25:01 by kimminseo         #+#    #+#             */
/*   Updated: 2019/09/24 14:25:31 by kimminseo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 2. Add Two Numbers [medium]
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
