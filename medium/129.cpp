/*
**	LeetCode: 129. Sum Root to Leaf Numbers [medium]
*/

class Solution {
	private:
		int res;

		void sumNumbers(TreeNode* root, int sum) {
			if (!root)
				return;
			sum = sum * 10 + root->val;
			if (!root->left && !root->right)
				res += sum;
			sumNumbers(root->left, sum);
			sumNumbers(root->right, sum);
		}

	public:
		int sumNumbers(TreeNode* root) {
			res = 0;
			sumNumbers(root, 0);
			return res;
		}
};
