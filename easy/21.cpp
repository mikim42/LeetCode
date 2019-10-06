/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 22:17:30 by mikim             #+#    #+#             */
/*   Updated: 2019/10/06 09:50:11 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 21. Merge Two Sorted Lists [easy]
*/

class Solution {
	public:
		ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
			ListNode	*head;
			ListNode	*tmp;

			if (!l1)
				return l2;
			if (!l2)
				return l1;
			if (l2->val < l1->val) {
				tmp = l1;
				l1 = l2;
				l2 = tmp;
			}
			head = l1;
			while (l1->next && l2) {
				if (l2->val < l1->next->val) {
					tmp = l2;
					l2 = l2->next;
					tmp->next = l1->next;
					l1->next = tmp;
				}
				else
					l1 = l1->next;
			}
			while (l2) {
				l1->next = l2;
				l1 = l1->next;
				l2 = l2->next;
			}
			return head;
		}
};
