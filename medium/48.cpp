/*
**	LeetCode: 48. Rotate Image [medium]
*/

class Solution {
	public:
		void rotate(vector<vector<int>>& m) {
			int n = m.size() - 1;
			for (int i = 0; i <= n / 2; ++i) {
				for (int j = i; j < n - i; ++j) {
					swap(m[i][j], m[j][n - i]);
					swap(m[i][j], m[n - i][n - j]);
					swap(m[i][j], m[n - j][i]);
				}
			}
		}
};
