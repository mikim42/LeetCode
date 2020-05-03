class Solution {
	public:
		bool backspaceCompare(string S, string T) {
			int s = S.size() - 1, t = T.size() - 1;
			int sdel = 0, tdel = 0;

			while (s >= 0 || t >= 0) {
				if (s >= 0 && S[s] == '#') {
					sdel++;
					s--;
				}
				else if (s >= 0 && S[s] != '#' && sdel > 0) {
					sdel--;
					s--;
				}
				else if (t >= 0 && T[t] == '#') {
					tdel++;
					t--;
				}
				else if (t >= 0 && T[t] != '#' && tdel > 0) {
					tdel--;
					t--;
				}
				else if (s >= 0 && t >= 0 && S[s] == T[t]) {
					s--;
					t--;
				}
				else
					return false;
			}
			return true;
		}
};
