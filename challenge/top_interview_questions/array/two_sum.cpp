class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			map<int, int> m;

			for (int i = 0; i < nums.size(); i++) {
				m[nums[i]] = i;
			}
			for (int i = 0; i < nums.size(); i++) {
				auto key = m.find(target - nums[i]);
				if (key != m.end() && (*key).second != i)
					return vector<int>{(*key).second, i};
			}
			return vector<int>{0,0};
		}
};
