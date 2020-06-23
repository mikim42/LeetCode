class Solution {
	private:
		ListNode* helper(ListNode* prev, ListNode* curr) {
			if (!curr) return prev;
			ListNode* next = curr->next;
			curr->next = prev;
			return helper(curr, next);
		}

	public:
		ListNode* reverseList(ListNode* head) {
			return helper(NULL, head);
		}
};
