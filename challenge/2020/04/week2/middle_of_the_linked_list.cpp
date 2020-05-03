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
			auto *slow = head;
			for (auto *fast = head; fast != NULL && fast->next != NULL; fast = fast->next->next)
				slow = slow->next;
			return slow;
		}
};
