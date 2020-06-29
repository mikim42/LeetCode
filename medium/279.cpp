/*
**	LeetCode:  279. Perfect Squares [medium]
*/

class Solution {
	public:
		int numSquares(int n) {
			vector<int> sqr;

			for (int x = 1; x * x <= n; ++x)
				sqr.push_back(x * x);

			int size = sqr.size();

			for(int i = 0; i < size; ++i)
				if(sqr[i]==n)
					return 1;
			for(int i = 0; i < size; ++i) {
				for(int j = i; j < size; ++j) {
					if(sqr[i] + sqr[j] == n)
						return 2;
				}
			}
			for(int i = 0; i < size; ++i) {
				for(int j = i; j < size; ++j) {
					for(int k = j; k < size; ++k) {
						if(sqr[i] + sqr[j] + sqr[k] == n)
							return 3;
					}
				}
			}
			return 4;
		}
};
