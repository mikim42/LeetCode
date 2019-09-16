/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   876.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:02:43 by mikim             #+#    #+#             */
/*   Updated: 2019/09/15 17:03:19 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 876. Middle of the Linked List [easy]
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
    ListNode* middleNode(ListNode* head) {
        ListNode *p1, *p2;

        p1 = head;
        p2 = head;
        while (p1) {
            p1 = p1->next;
            if (p1) {
                p1 = p1->next;
                p2 = p2->next;
            }
        }
        return p2;
    }
};
