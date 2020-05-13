/*
**	LeetCode: 402. Remove K Digits [medium]
*/

}class Solution {
	public:
		string removeKdigits(string num, int k) {
			if (k >= num.size()) return "0";
			for (int i = 1; i < num.size() && k > 0; ++i) {
				if (num[0] < num[i] && num[0] != '0' &&
						!(i < num.size() && num[i] < num[i + 1])) {
					num.erase(num.begin() + i);
					--k;
					i = 0;
				}
				else if (num[0] > num[i]) {
					num.erase(num.begin());
					--k;
					i = 0;
				}
				while (num[0] == '0')
					num.erase(num.begin());
			}
			return num.size() - k <= 0 ? "0" : num.substr(0, num.size() - k);
		}
};;
