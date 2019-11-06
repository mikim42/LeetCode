/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   733.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:21:30 by mikim             #+#    #+#             */
/*   Updated: 2019/11/06 11:21:50 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 733. Flood Fill [easy]
*/

class Solution {
	public:
		vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
			if (image[sr][sc] == newColor)
				return image;
			else
				fillHelper(image, sr, sc, newColor);
			return image;
		}

		void fillHelper(vector<vector<int>> &image, int r, int c, int ncolor) {
			int tmp = image[r][c];

			image[r][c] = ncolor;
			cout << "1" << endl;
			if (r > 0 && image[r - 1][c] == tmp)
				fillHelper(image, r - 1, c, ncolor);
			cout << "2" << endl;
			if (r < image.size() - 1 && image[r + 1][c] == tmp)
				fillHelper(image, r + 1, c, ncolor);
			cout << "3" << endl;
			if (c > 0 && image[r][c - 1] == tmp)
				fillHelper(image, r, c - 1, ncolor);
			cout << "4" << endl;
			if (c < image[r].size() - 1 && image[r][c + 1] == tmp)
				fillHelper(image, r, c + 1, ncolor);
		}


};
