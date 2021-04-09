class Solution {
	public:
		int maxDepth(TreeNode* root) {
			queue<TreeNode*> q;
			int size = 0;
			int depth = 0;

			if (!root)
				return depth;
			q.push(root);
			while (!q.empty()) {
				if (size == 0) {
					++depth;
					size = q.size();
				}
				TreeNode *tmp = q.front(); q.pop();
				if (tmp->left) q.push(tmp->left);
				if (tmp->right) q.push(tmp->right);
				size--;
			}
			return depth;
		}
};
