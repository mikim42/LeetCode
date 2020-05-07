/*
**	LeetCode: 993. Cousins in Binary Tree [easy]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
	pair<int, int> helper(TreeNode* root, int t, int p, int d) {
		if (root->val == t) return pair<int, int>(p, d);
		pair<int, int> l(0, -1), r(0, -1);
		if (root->left)
			l = helper(root->left, t, root->val, d + 1);
		if (root->right)
			r = helper(root->right, t, root->val, d + 1);
		if (l.second >= 0) return l; else return r;
	}

	public:
	bool isCousins(TreeNode* root, int x, int y) {
		pair<int, int> f1 = helper(root, x, root->val, 0);
		pair<int, int> f2 = helper(root, y, root->val, 0);
		return f1.first != f2.first && f1.second == f2.second;
	}
};
