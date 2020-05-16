/*
**	LeetCode: 918. Maximum Sum Circular Subarray [medium]
*/

class Solution {
	public:
		int maxSubarraySumCircular(vector<int>& A) {
			int sum = 0, maxSoFar = -30000, maxTotal = -30000,
				minSoFar = 30000, minTotal = 30000;
			for(auto x : A) {
				maxTotal = max(maxTotal, (maxSoFar = max(x, maxSoFar + x)));
				minTotal = min(minTotal, (minSoFar = min(x, minSoFar + x)));
				sum += x;
			}
			return (sum == minTotal) ? maxTotal : max(sum - minTotal, maxTotal);
		}
};
