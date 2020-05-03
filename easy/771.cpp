/*
**	LeetCode: 771. Jewels and Stones [easy]
*/

class Solution {
	public:
		int numJewelsInStones(string J, string S) {
			int res = 0;
			for (auto x : S)
				if (find(J.begin(), J.end(), x) != J.end()) res++;
			return res;
		}
};

