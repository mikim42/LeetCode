class Solution {
	public:
		bool checkValidString(string s) {
			stack<char> st;
			int star = 0;

			for (auto x : s) {
				switch (x) {
					case '(':
						st.push(x);
						break;
					case '*':
						if (st.empty()) star++;
						else {st.pop(); star += 2;}
						break;
					case ')':
						if (!st.empty()) st.pop();
						else if (star > 0) star--;
						else return false;
				}
			}
			return st.empty();
		}
};
