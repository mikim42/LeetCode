/*
**	LeetCode: 328. Odd Even Linked List [medium]
*/

class Solution {
	public:
		ListNode* oddEvenList(ListNode* head) {
			if (!head) return head;

			ListNode *odd = head;
			ListNode *evenHead = head->next;
			ListNode *even = evenHead;
			while (even && even->next) {
				odd->next = even->next;
				odd = odd->next;
				even->next = odd->next;
				even = even->next;
			}
			odd->next = evenHead;
			return head;
		}
};
