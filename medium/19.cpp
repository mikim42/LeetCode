/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   19.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:27:35 by mikim             #+#    #+#             */
/*   Updated: 2019/11/12 11:28:21 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 19. Remove Nth Node From End of List [medium]
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	public:
		ListNode* removeNthFromEnd(ListNode* head, int n) {
			ListNode *fast = head;
			ListNode *slow = NULL;

			if (!head)
				return head;
			for (int i = 0; i < n; i++) {
				fast = fast->next;
			}
			while (fast) {
				fast = fast->next;
				if (!slow)
					slow = head;
				else
					slow = slow->next;
			}
			if (slow) {
				fast = slow->next;
				slow->next = fast->next;
			}
			else {
				fast = head;
				head = head->next;
			}
			delete fast;
			return head;
		}
};
