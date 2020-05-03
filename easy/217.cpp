/*
**	LeetCode: 217. Contains Duplicate [easy]
*/

class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			unordered_map<int, int> m;

			for (auto x : nums)
				if (m[x]++ > 0) return true;
			return false;
		}
};
