class Solution {
	public:
		bool canTake(vector<int> course[], vector<int>& visited, int n) {
			if (visited[n] == 1)
				return false;
			visited[n] = 1;
			for (int i = 0; i < course[n].size(); i++) {
				if (!canTake(course, visited, course[n][i]))
					return false;
			}
			visited[n] = 0;
			return true;
		}

		bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
			vector<int> course[numCourses];

			for (auto x : prerequisites) {
				course[x[0]].push_back(x[1]);
			}

			vector<int> visited(numCourses, 0);
			for (int i = 0; i < numCourses; i++) {
				if (!canTake(course, visited, i))
					return false;
			}
			return true;
		}
};
