class Solution {
	public:
		int uniquePaths(int m, int n) {
			return getBinomialCoefficient(n - 1, m + n - 2);
		}

	private:
		int getBinomialCoefficient(int m, int n) {
			long result = 1;

			if (m > n - m)
				m = n - m;
			for (unsigned i = 0; i < m; ++i) {
				result *= (n - i);
				result /= (i + 1);
			}
			return result;
		}
};
