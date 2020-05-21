/*
**	LeetCode: 230. Kth Smallest Element in a BST [medium]
*/

class Solution {
	private:
		vector<int> v;

		void helper(TreeNode *root) {
			if (root) {
				helper(root->left);
				v.push_back(root->val);
				helper(root->right);
			}
		}

	public:
		int kthSmallest(TreeNode* root, int k) {
			helper(root);
			return v[k - 1];
		}
};
