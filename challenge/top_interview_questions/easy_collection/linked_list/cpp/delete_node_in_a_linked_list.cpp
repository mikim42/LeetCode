class Solution {
	public:
		void deleteNode(ListNode* node) {
			ListNode **del = &node;
			*node = *node->next;
			delete del;
		}
};
