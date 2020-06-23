/*
**	LeetCode: 8. String to Integer (atoi) [medium]
*/

class Solution {
	public:
		int myAtoi(string s) {
			long n = 0;
			int np = 1, i = 0;

			while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n' ||
					s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
				++i;
			s[i] == '-' ? np = -1 : 0;
			s[i] == '-' || s[i] == '+' ? ++i : 0;
			while (s[i] >= '0' && s[i] <= '9') {
				n *= 10;
				n += s[i] - 48;
				++i;
				if (n > 2147483647 && np == 1)
					return (2147483647);
				else if (n > 2147483647 && np == -1)
					return (-2147483648);
			}
			return ((int)n * np);
		}
};
