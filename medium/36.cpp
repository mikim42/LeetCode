/*
**	LeetCode: 36. Valid Sudoku [medium]
*/

class Solution {
	private:
		char box(vector<vector<char>>& board, int i, int j) {
			int r, c;
			r = ((i / 3) * 3) + (j / 3);
			c = (j % 3) + ((i % 3) * 3);
			return board[r][c];
		}

	public:
		bool isValidSudoku(vector<vector<char>>& board) {
			for (int i = 0; i < 9; ++i) {
				map<char, int> v, h, b;
				for (int j = 0; j < 9; ++j) {
					char vc = board[i][j], hc = board[j][i], bc = box(board, i, j);
					if ((vc != '.' && v[vc]++ > 0) ||
							(hc != '.' && h[hc]++ > 0) ||
							(bc != '.' && b[bc]++ > 0))
						return false;
				}
			}
			return true;
		}
};
