class Solution {
	public:
		ListNode* removeNthFromEnd(ListNode* head, int n) {
			ListNode *slow = head, *fast = head;

			while (n-- > 0)
				fast = fast->next;
			while (fast && fast->next) {
				slow = slow->next;
				fast = fast->next;
			}
			if (!fast) {
				head = head->next;
				delete slow;
			}
			else {
				fast = slow->next;
				slow->next = slow->next->next;
				delete fast;
			}
			return head;
		}
};
