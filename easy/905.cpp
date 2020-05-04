/*
**	LeetCode: 905. Sort Array By Parity [easy]
*/

class Solution {
	public:
		vector<int> sortArrayByParity(vector<int>& A) {
			vector<int> v;
			int border = 0;

			for (auto x : A) {
				v.push_back(x);
				if (x % 2 == 0) swap(v[border++], v[v.size() - 1]);
			}
			return v;
		}
};
