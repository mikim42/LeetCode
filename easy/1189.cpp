/*
**	LeetCode: 1189. Maximum Number of Balloons [easy]
*/

class Solution {
	public:
		int maxNumberOfBalloons(string text) {
			unordered_map<char, int> m;

			for (auto x : text) {
				switch (x) {
					case 'b':
						++m[x];
						break;
					case 'a':
						++m[x];
						break;
					case 'l':
						++m[x];
						break;
					case 'o':
						++m[x];
						break;
					case 'n':
						++m[x];
						break;
				}
			}
			return min({m['b'], m['a'], m['l'] / 2, m['o'] / 2, m['n']});
		}
};
