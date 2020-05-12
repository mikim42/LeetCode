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
			if (r > 0 && image[r - 1][c] == tmp)
				fillHelper(image, r - 1, c, ncolor);
			if (r < image.size() - 1 && image[r + 1][c] == tmp)
				fillHelper(image, r + 1, c, ncolor);
			if (c > 0 && image[r][c - 1] == tmp)
				fillHelper(image, r, c - 1, ncolor);
			if (c < image[r].size() - 1 && image[r][c + 1] == tmp)
				fillHelper(image, r, c + 1, ncolor);
		}
};

