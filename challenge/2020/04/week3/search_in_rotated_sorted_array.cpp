class Solution {
	private:
		bool helper(int t, int l, int m, int r) {
			bool left = true, right = false;
			if (l < r) {
				if (t < m) return left;
				else return right;
			}
			else {
				if (m < r) {
					if (t >= l || t < m) return left;
					else return right;
				}
				else {
					if (t <= r || t > m) return right;
					else return left;
				}
			}
		}
	public:
		int search(vector<int>& nums, int target) {
			int l = 0, r = nums.size() - 1;

			while (l <= r) {
				int m = (l + r) / 2;
				if (nums[m] == target) return m;
				if (helper(target, nums[l], nums[m], nums[r]))
					r = m - 1;
				else
					l = m + 1;
			}
			return -1;
		}
};
