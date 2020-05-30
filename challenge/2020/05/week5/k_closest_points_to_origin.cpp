class Solution {
	public:
		vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
			map<int, vector<vector<int>>> m;
			vector<vector<int>> vv;
			int n = points.size();

			for (int i = 0; i < n; ++i)
				m[points[i][0] * points[i][0] + points[i][1] * points[i][1]].push_back(points[i]);
			for (auto &x : m) {
				for (auto &y : x.second) {
					if (K == 0) break;
					vv.push_back(y);
					--K;
				}
			}
			return vv;
		}
};
