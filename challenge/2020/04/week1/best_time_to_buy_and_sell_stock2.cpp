class Solution {
	public:
		int maxProfit(vector<int>& prices) {
			int profit = 0, buy = 0, prev = 0;
			int n = prices.size();
			if (n == 0)
				return 0;
			for (int i = 0; i < n; i++) {
				if (prices[prev] <= prices[i]) {
					prev = i;
				}
				else {
					profit += prices[prev] - prices[buy];
					buy = i;
					prev = i;
				}
			}
			return (profit += prices[prev] - prices[buy]);
		}
};
