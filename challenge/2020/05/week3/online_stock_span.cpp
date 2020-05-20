class StockSpanner {
	private:
		stack<pair<int, int>> st;

	public:
		StockSpanner() {

		}

		int next(int price) {
			int res = 1;
			while (!st.empty() && price >= st.top().first) {
				res += st.top().second;
				st.pop();
			}
			st.push({price, res});
			return res;
		}
};
