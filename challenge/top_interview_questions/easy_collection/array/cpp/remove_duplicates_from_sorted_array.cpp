class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {
			int n = nums.size();
			int index = 0;

			if (n == 0)
				return 0;
			for (int i = 1; i < n; i++)
				if (nums[i] != nums[index])
					nums[++index] = nums[i];
			return index + 1;
		}
};
