class Solution {
	private:
		void DFS(unordered_map<string, multiset<string>> &flight, string airport, vector<string> &result) {
			while (!flight[airport].empty()) {
				auto it = flight[airport].begin();
				string next = *it;
				flight[airport].erase(it);
				DFS(flight, next, result);
			}
			result.push_back(airport);
		}

	public:
		vector<string> findItinerary(vector<vector<string>>& tickets) {
			int n = tickets.size();
			unordered_map<string, multiset<string>> flight;

			for (int i = 0; i < n; i++)
				flight[tickets[i][0]].insert(tickets[i][1]);
			vector<string> result;
			DFS(flight, "JFK", result);
			reverse(result.begin(), result.end());
			return result;
		}
};
