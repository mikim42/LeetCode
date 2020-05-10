class Solution {
	public:
		bool checkStraightLine(vector<vector<int>>& cd) {
			double  m = (double)(cd[1][1] - cd[0][1]) / (cd[1][0] - cd[0][0]),
					c = (double)cd[0][1] - (m * cd[0][0]);

			for (auto x : cd) if (x[1] != m * x[0] + c) return false;
			return true;
		}
};
