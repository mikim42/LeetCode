class Solution {
	public:
		bool checkInclusion(string s1, string s2) {
			int n1 = s1.size();
			int n2 = s2.size();
			vector<int> perm(26, 0);
			vector<int> chk(26, 0);

			if (n2 < n1) return false;        
			for (int i = 0; i < n1; ++i) {
				perm[s1[i] - 'a']++;
				chk[s2[i] - 'a']++;
			}
			if (perm == chk) return true;
			for (int i = n1; i < n2; ++i) {
				chk[s2[i - n1] - 'a']--;
				chk[s2[i] - 'a']++;
				if (perm == chk) return true;
			}
			return false;
		}
};
