/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   234.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:17:08 by mikim             #+#    #+#             */
/*   Updated: 2019/12/15 10:17:11 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 234. Palindrome Linked List [easy]
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
		bool isPalindrome(ListNode* head) {
			ListNode* slow;
			ListNode* fast;
			stack<int> st;

			if (!head || !head->next)
				return true;
			slow = head;
			fast = head;
			while (fast) {
				st.push(slow->val);
				slow = slow->next;
				fast = fast->next;
				if (!fast) {
					st.pop();
					break;
				}
				fast = fast->next;
			}
			while (slow) {
				if (st.top() != slow->val)
					return false;
				else {
					st.pop();
					slow = slow->next;
				}
			}
			return true;
		}
};
