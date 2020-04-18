class Solution {
	public:
		int maxSubArray(vector<int>& nums) {
			int tmp = -1, sum = nums[0];
			for (auto x : nums) {
				if (tmp < 0) tmp = x;
				else tmp += x;
				sum = max(sum, tmp);
			}
			return sum;
		}
};
