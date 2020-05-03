class Solution {
	public:
		bool isHappy(int n) {
			int next = n;
			set<int> s;
			while (next != 1) {
				auto x = s.insert(next);
				if (x.second == false)
					return false;
				n = next;
				next = 0;
				while (n > 0) {
					next += (n % 10) * (n % 10);
					n /= 10;
				}
			}
			return true;
		}
};
