class Solution {
	public:
		vector<int> findAnagrams(string s, string p) {
			vector<int> res;
			vector<int> chk(26, 0);
			vector<int> cnt(26, 0);
			int n1 = s.size();
			int n2 = p.size();

			int i = 0;
			if (n1 < n2) return res;
			for (i = 0; i < n2; ++i) chk[p[i] - 'a']++, cnt[s[i] - 'a']++;
			if (chk == cnt) res.push_back(i - n2);
			for (; i < n1; ++i) {
				cnt[s[i - n2] - 'a']--, cnt[s[i] - 'a']++;
				if (chk == cnt) res.push_back(i - n2 + 1);
			}
			return res;
		}
};
