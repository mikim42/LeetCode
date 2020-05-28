/*
**	LeetCode: 7. Reverse Integer [easy]
*/

class Solution {
	public:
		int reverse(int x) {
			long n = 0;
			long neg = x < 0 ? -1 : 1;

			x *= neg;
			while (x > 0) {
				n *= 10;
				n += neg * (x % 10);
				x /= 10;
			}
			return INT_MIN <= n && n <= INT_MAX ? (int)n : 0;
		}
};
