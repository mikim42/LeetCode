class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *head = NULL, *tmp = NULL;
		int carry = 0;
		
		while (l1 || l2 || carry) {
			int n = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
			carry = n / 10, n = n % 10;
			ListNode *newnode = new ListNode(n);
			if (!head) head = newnode, tmp = head;
			else tmp->next = newnode, tmp = tmp->next;
			l1 = l1 ? l1->next : 0, l2 = l2 ? l2->next : 0;
		}
		return head;
	}
};
