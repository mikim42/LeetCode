/*
**	LeetCode: 283. Move Zeroes [easy]
*/

class Solution {
	public:
		void moveZeroes(vector<int>& nums) {
			int n = nums.size();
			for (int p = 0; p < n; p++) {
				if (nums[p] != 0) continue;
				int i = p + 1;
				while (i < n && nums[i] == 0) i++;
				if (i < n) swap(nums[p], nums[i]);
			}
		}
};
