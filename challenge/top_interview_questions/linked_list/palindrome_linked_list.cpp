class Solution {
	private:
		ListNode *reverseList(ListNode *prev, ListNode *curr) {
			if (!curr) return prev;
			ListNode *next = curr->next;
			curr->next = prev;
			return reverseList(curr, next);
		}
	public:
		bool isPalindrome(ListNode *head) {
			if (!head) return true;

			ListNode *p1 = head, *p2 = head;
			int odd;
			while (p2) {
				p2 = p2->next;
				if (!p2) break;
				p1 = p1->next;
				p2 = p2->next;
			}

			p2 = reverseList(NULL, p1);
			p1 = head;
			while (p2) {
				if (p1->val != p2->val)
					return false;
				p1 = p1->next, p2 = p2->next;
			}
			return true;
		}
};
