class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {
			string prefix = "";
			int vsize = strs.size();
			int ssize = vsize == 0 ? 0 : strs[0].size();

			for (int i = 0; i < ssize; ++i) {
				char c = strs[0][i];
				int j;
				for (j = 0; j < vsize; ++j) {
					if (strs[j][i] != c)
						return prefix;
				}
				if (j == vsize)
					prefix += c;
			}
			return prefix;
		}
};
