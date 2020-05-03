class Solution {
	public:
		int findMaxLength(vector<int>& nums) {
			unordered_map<int, int> m;
			int maxlen = 0;

			for (int i = 0, sum = 0; i < nums.size(); i++) {
				sum += nums[i] == 0 ? -1 : 1;
				if (sum == 0) maxlen = i + 1;
				else {
					auto p = m.find(sum);
					if (p == m.end())
						m[sum] = i;
					else
						maxlen = max(maxlen, i - m[sum]);
				}
			}
			return maxlen;
		}
};
