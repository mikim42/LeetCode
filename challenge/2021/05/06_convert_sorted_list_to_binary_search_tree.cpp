class Solution {
	public:
		TreeNode* sortedListToBST(ListNode* head) {
			ListNode *fast = head, *slow = head, *prev = NULL, *next = NULL;
			int val = 0;

			if (!head)
				return NULL;
			while (fast && fast->next) {
				fast = fast->next->next;
				prev = slow;
				slow = slow->next;
			}
			val = slow->val;
			next = slow->next;
			prev ? prev->next = NULL : head = NULL;
			return new TreeNode(val, sortedListToBST(head), sortedListToBST(next));
		}
};
