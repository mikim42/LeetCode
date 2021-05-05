class Solution {
	public:
		bool isAnagram(string s, string t) {
			if (s.size() != t.size())
				return false;

			vector<int> cnt(26, 0);
			int res = 0;
			for (int i = 0; i < s.size(); i++)
				cnt[s[i] - 'a']++, cnt[t[i] - 'a']--;
			for (auto x : cnt) if (x) return false;
			return true;
		}
};
