class Solution {    
	public:
		string stringShift(string s, vector<vector<int>>& shift) {
			int count = 0;
			int n = s.size();
			string res(s);
			for (auto &x : shift)
				count += x[0] == 0 ? -x[1] : x[1];
			count %= n;
			if (count != 0) {
				if (count < 0) count = n + count;
				for (int i = 0; i < n; ++i)
					res[(i + count) % n] = s[i];
			}
			return res;
		}
};
