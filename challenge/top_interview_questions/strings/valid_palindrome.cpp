class Solution {
	public:
		bool isPalindrome(string s) {
			if (s.empty())
				return true;

			int n = s.size();
			int i = 0, j = n - 1;

			while (i < j) {
				while (i < n && !isalnum(s[i]))
					i++;
				while (j >= 0 && !isalnum(s[j]))
					j--;
				if (!(i < j))
					break;
				s[i] |= 32;
				s[j] |= 32;
				if (!(i < j && s[i] == s[j]))
					return false;
				i++;
				j--;
			}
			return true;
		}
};
