/*
**	LeetCode: 22. Generate Parentheses [medium]
*/

class Solution {
	private:
		vector<string> r;
		int pmax;

		void helper(string s, int open, int close) {
			if (open == pmax && close == pmax)
				r.push_back(s);

			if (open < pmax) helper((s + "("), open + 1, close);
			if (close < open) helper((s + ")"), open, close + 1);
		}

	public:
		vector<string> generateParenthesis(int n) {
			pmax = n;
			helper(string(""), 0, 0);
			return r;
		}
};
