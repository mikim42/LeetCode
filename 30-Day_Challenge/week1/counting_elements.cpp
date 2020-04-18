class Solution {
	public:
		int countElements(vector<int>& arr) {
			int m[1001] = {0};
			int res = 0;

			for (auto i : arr)
				m[i]++;
			for (int i = 0; i < 1000; i++)
				if (m[i + 1] > 0) res += m[i];
			return res;
		}
};
