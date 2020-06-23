/*
**	LeetCode: 28. Implement strStr() [easy]
*/

class Solution {
	public:
		int strStr(string haystack, string needle) {
			int n1 = haystack.size(), n2 = needle.size();

			for (int i = 0; i < n1 - n2 + 1; ++i) {
				int j;
				for (j = 0; j < n2 && haystack[i + j] == needle[j]; ++j);
				if (j == n2) return i;
			}
			return -1;
		}
};
