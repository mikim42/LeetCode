/*
**	LeetCode: 96. Unique Binary Search Trees [medium]
*/

class Solution {
	private:
		double fact(int n) {
			double res = 1;
			while (n > 1)
				res *= n--;
			return res;
		}

	public:
		int numTrees(int n) {
			return round(fact(2 * n) / (fact(n) * fact(n) * (n + 1)));
		}
};

https://leetcode.com/problems/unique-binary-search-trees/discuss/703049/Python-Math-oneliner-O(n)-using-Catalan-number-explained
