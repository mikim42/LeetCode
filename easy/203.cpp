/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   203.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:03:17 by mikim             #+#    #+#             */
/*   Updated: 2020/02/04 13:03:35 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 203. Remove Linked List Elements [easy]
*/

class Solution {
	public:
		ListNode* removeElements(ListNode* head, int val) {
			ListNode *prev;
			ListNode *curr;

			prev = head;
			if (!prev)
				return head;
			while (prev->val == val) {
				head = prev->next;
				delete prev;
				prev = head;
				if (!prev)
					return prev;
			}
			curr = prev->next;
			while (curr) {
				if (curr->val == val) {
					prev->next = curr->next;
					delete curr;
					curr = prev->next;
				}
				else {
					prev = curr;
					curr = curr->next;
				}
			}
			return head;
		}
};
