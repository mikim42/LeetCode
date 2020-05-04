class Solution {
	public:
		bool canConstruct(string ransomNote, string magazine) {
			int cnt[26] = {0};

			for (auto x : ransomNote) --cnt[x - 'a'];
			for (auto x : magazine) ++cnt[x - 'a'];
			for (int i = 0; i < 26; ++i) if (cnt[i] < 0) return false;
			return true;
		}
};
