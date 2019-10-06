/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   206.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 17:48:29 by mikim             #+#    #+#             */
/*   Updated: 2019/10/06 09:49:59 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 206. Reverse Linked List [easy]
*/

class Solution {
	public:
		//	Recursive
		ListNode* recur_rev(ListNode* head, ListNode* prev) {
			if (!head)
				return prev;
			ListNode* tmp = head->next;
			head->next = prev;
			return recur_rev(tmp, head);
		}

		ListNode* reverseList(ListNode* head) {
			return recur_rev(head, NULL);
		}
/* ************************************************************************** */
		//	Iterative
		ListNode* reverseList(ListNode* head) {
			ListNode *prev;
			ListNode *next;
			ListNode *curr;

			prev = NULL;
			curr = head;
			while (curr) {
				next = curr->next;
				curr->next = prev;
				prev = curr;
				curr = next;
			}
			return prev;
		}
};
