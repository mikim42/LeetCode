/*
**	LeetCode: 237. Delete Node in a Linked List [easy]
*/

class Solution {
	public:
		void deleteNode(ListNode* node) {
			ListNode **del = &node;
			*node = *node->next;
			delete del;
		}
};
