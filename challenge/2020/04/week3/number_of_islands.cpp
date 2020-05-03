class Solution {
	private:
		void visited(vector<vector<char>>& grid, int y, int x) {
			if (y < 0 || x < 0 || y >= grid.size() || x >= grid[y].size() ||
				grid[y][x] != '1') return;
			grid[y][x] = '2';
			visited(grid, y, x - 1);
			visited(grid, y, x + 1);
			visited(grid, y - 1, x);
			visited(grid, y + 1, x);
		}

	public:
		int numIslands(vector<vector<char>>& grid) {
			int count = 0;

			for (int i = 0; i < grid.size(); ++i) {
				for (int j = 0; j < grid[i].size(); ++j) {
					if (grid[i][j] == '1') {
						count++;
						visited(grid, i, j);
					}
				}
			}
			return count;
		}
};
