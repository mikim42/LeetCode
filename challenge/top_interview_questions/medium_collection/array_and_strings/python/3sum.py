class Solution:
	def threeSum(self, nums: List[int]) -> List[List[int]]:
		res = []
		nums.sort()
		for i in range(len(nums)):
			if nums[i] > 0:
				break
			if i > 0 and nums[i] == nums[i - 1]:
				continue
			m, r = i + 1, len(nums) - 1
			while m < r:
				tmp = nums[i] + nums[m] + nums[r]
				if tmp == 0:
					res.append([nums[i], nums[m], nums[r]])
				if tmp >= 0:
					r -= 1
					while m < r and nums[r] == nums[r + 1]:
						r -= 1
				if tmp <= 0:
					m += 1
					while m < r and nums[m] == nums[m - 1]:
						m += 1
		return res
