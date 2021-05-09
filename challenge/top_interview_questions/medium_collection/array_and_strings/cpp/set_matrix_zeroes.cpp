class Solution {
	public:
		void setZeroes(vector<vector<int>>& matrix) {
			int n = matrix.size(), m = matrix[0].size();
			int first_row = 1;

			for (int j = 0; j < m && first_row; ++j)
				first_row = matrix[0][j] == 0 ? 0 : 1;

			for (int i = 1; i < n; ++i)
				for (int j = 0; j < m; ++j)
					if (matrix[i][j] == 0)
						matrix[0][j] = matrix[i][0] = 0;

			for (int i = 1; i < n; ++i)
				for (int j = 1; j < m; ++j)
					matrix[i][j] = matrix[0][j] == 0 || matrix[i][0] == 0 ?
						0 : matrix[i][j];

			for (int i = 0; i < n && !matrix[0][0]; ++i)
				matrix[i][0] = 0;

			for (int j = 0; j < m && !first_row; ++j)
				matrix[0][j] = 0;
		}
};
