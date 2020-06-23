/*
**	LeetCode: 222. Count Complete Tree Nodes [medium]
*/

class Solution {
	private:
		int leftH(TreeNode *root) {
			int h = 0;

			while (root)
				root = root->left, h++;
			return h;
		}

		int rightH(TreeNode *root) {
			int h = 0;

			while (root)
				root = root->right, h++;
			return h;
		}

		int countNodes(TreeNode *root, int l, int r) {
			l = l == -1 ? leftH(root) : l;
			r = r == -1 ? rightH(root) : r;

			if (l == r) return pow(2, l) - 1;
			return 1 + countNodes(root->left, l - 1, -1) + countNodes(root->right, -1, r - 1);
		}

	public:
		int countNodes(TreeNode* root) {
			return countNodes(root, -1, -1);
		}
};
