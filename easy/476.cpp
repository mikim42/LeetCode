/*
**	LeetCode: 476. Number Complement [easy]
*/

class Solution {
	public:
		int findComplement(int num) {
			int res = 0, exp = 0;
			if (num == 0) return 1;
			for (int n = num; n > 0; n /= 2) res += (1 ^ n % 2) * pow(2, exp++);
			return res;
		}
};
