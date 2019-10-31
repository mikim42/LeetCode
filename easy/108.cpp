/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   108.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <mikim@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:17:43 by mikim             #+#    #+#             */
/*   Updated: 2019/10/28 14:21:30 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                              Mingyun Kim   */
/*                                           https://www.github.com/mikim42   */
/* ************************************************************************** */

/*
**	LeetCode: 108. Convert Sorted Array to Binary Search Tree [easy]
*/

class Solution {
	public:
		TreeNode* buildBST(vector<int> &nums, int st, int end) {
			if (st == end)
				return NULL;

			int mid = (st + end) / 2;
			TreeNode *root = new TreeNode(nums[mid]);

			root->left = buildBST(nums, st, mid);
			root->right = buildBST(nums, mid + 1, end);
			return root;
		}

		TreeNode* sortedArrayToBST(vector<int>& nums) {
			return buildBST(nums, 0, nums.size());
		}
};
