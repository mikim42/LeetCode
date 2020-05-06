class Solution {
	public:
		int majorityElement(vector<int>& nums) {
			pair<int, int> major;
			for (auto &x : nums) {
				if (!major.second) major.first = x;
				major.second += major.first == x ? 1 : -1;                
			}
			return major.first;
		}
};
