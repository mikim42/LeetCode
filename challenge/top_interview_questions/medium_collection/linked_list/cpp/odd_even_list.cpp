class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		ListNode *tmp = head, *evens = NULL, *even = NULL;
		
		while (tmp) {
			if (!evens) evens = tmp->next, even = evens;
			else even->next = tmp->next, even = even->next;
			if (!tmp->next || !tmp->next->next) {
				tmp->next = evens;
				break;
			}
			tmp->next = tmp->next->next, tmp = tmp->next;
		}
		return head;
	}
};
