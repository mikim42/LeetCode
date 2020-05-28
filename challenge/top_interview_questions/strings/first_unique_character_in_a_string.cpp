class Solution {
	public:
		int firstUniqChar(string s) {
			int letters[26] = {0}, n = s.size();
			for (auto x : s) ++letters[x - 'a'];
			for (int i = 0; i < n; ++i) if (letters[s[i] - 'a'] == 1) return i;
			return -1;
		}
};
