class Solution {
	public:
		bool hasCycle(ListNode *head) {
			ListNode *slow = head, *fast = head;

			while (slow && fast) {
				fast = fast->next;
				if (!fast)
					return false;
				fast = fast->next;
				slow = slow->next;
				if (fast == slow)
					return true;
			}
			return false;
		}
};
