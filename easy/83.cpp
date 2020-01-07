/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   83.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:56:41 by mikim             #+#    #+#             */
/*   Updated: 2020/01/07 14:57:04 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 83. Remove Duplicates from Sorted List [easy]
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
		ListNode* deleteDuplicates(ListNode* head) {
			ListNode *it = head;

			if (!it)
				return head;
			while (it->next) {
				if (it->val == it->next->val) {
					ListNode* del = it->next;

					it->next = it->next->next;
					delete del;
				}
				else
					it = it->next;
			}
			return head;
		}
};
