/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   79.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:42:05 by mikim             #+#    #+#             */
/*   Updated: 2019/11/17 18:43:25 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 79. Word Search [medium]
*/

class Solution {
	private:
		bool exist(vector<vector<char>>& board, int y, int x, string word, int pos) {
			if (board[y][x] != word[pos++])
				return false;
			if (pos == word.size())
				return true;

			board[y][x] = ' ';
			bool res = (
					(y < board.size() - 1 && exist(board, y + 1, x, word, pos)) ||
					(y > 0 && exist(board, y - 1, x, word, pos)) ||
					(x < board[y].size() - 1 && exist(board, y, x + 1, word, pos)) ||
					(x > 0 && exist(board, y, x - 1, word, pos))
					);
			board[y][x] = word[pos - 1];
			return res;
		}

	public:
		bool exist(vector<vector<char>>& board, string word) {
			int pos = 0;

			for (int y = 0; y < board.size(); y++) {
				for (int x = 0; x < board[y].size(); x++) {
					if (board[y][x] == word[pos] && exist(board, y, x, word, pos))
						return true;
				}
			}
			return false;
		}
};
