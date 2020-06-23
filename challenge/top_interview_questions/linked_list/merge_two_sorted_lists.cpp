class Solution {
	public:
		ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
			if (!l1 || !l2) return (ListNode*)((long)l1 | (long)l2);

			ListNode* head = NULL;
			ListNode* curr;
			while (l1 && l2) {
				ListNode* tmp;
				if (l1->val < l2->val)
					tmp = l1, l1 = l1->next;
				else
					tmp = l2, l2 = l2->next;
				if (!head)
					head = curr = tmp;
				else
					curr->next = tmp, curr = curr->next;
			}
			curr->next = (ListNode*)((long)l1 | (long)l2);
			return head;
		}
};
