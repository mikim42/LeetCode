class Solution {
	public:
		int nthUglyNumber(int n) {
			static vector<int> v{1};
			static int i = 0, j = 0, k = 0;

			while (v.size() < n) {
				v.push_back(min(v[i] * 2, min(v[j] * 3, v[k] * 5)));
				if (v[i] * 2 == v.back()) ++i;
				if (v[j] * 3 == v.back()) ++j;
				if (v[k] * 5 == v.back()) ++k;
			}
			return v[n - 1];
		}
};
