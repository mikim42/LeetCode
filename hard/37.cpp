/*
**	LeetCode: 37. Sudoku Solver [hard]
*/

class Solution {
	private:
		char square(vector<vector<char>>& board, int i, int j, int x) {
			int row = (i / 3) * 3 + x / 3;
			int col = (j / 3) * 3 + x % 3;
			return board[row][col];
		}

		bool checker(vector<vector<char>>& board, int i, int j, char k) {
			for (int x = 0; x < 9; ++x) {
				if (x != i && board[x][j] == k) return false;
				if (x != j && board[i][x] == k) return false;
				if (square(board, i, j, x) == k) return false;
			}
			return true;
		}

		bool helper(vector<vector<char>>& board, int i, int j) {
			while (++i < 9) {
				while (++j < 9) {
					if (board[i][j] != '.') continue;
					char k;
					for (k = '1'; k <= '9'; ++k) {
						if (checker(board, i, j, k)) {
							board[i][j] = k;
							if (!helper(board, i, j))
								board[i][j] = '.';
						}
					}
					if (board[i][j] == '.') return false;
				}
			}
			return true;
		}    

	public:
		void solveSudoku(vector<vector<char>>& board) {
			helper(board, -1, -1);
		}
};
