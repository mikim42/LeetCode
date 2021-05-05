class Solution:
	def runningSum(self, nums: List[int]) -> List[int]:
		res = [nums[0]]
		for x in nums[1:]:
			res.append(res[-1] + x)
		return res
