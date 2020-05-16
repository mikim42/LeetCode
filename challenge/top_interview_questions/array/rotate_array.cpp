class Solution {
	public:
		void rotate(vector<int>& nums, int k) {
			queue<int> q;
			int n = nums.size();
			k %= n;

			for (int i = 0; i < n; i++) {
				if (i < n - k)
					q.push(nums[i]);
				if (i < k)
					nums[i] = nums[n - k + i];
				else
					nums[i] = q.front(), q.pop();
			}
		}
};
