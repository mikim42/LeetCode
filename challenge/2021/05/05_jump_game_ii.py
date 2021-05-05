class Solution:
	def jump(self, nums: List[int]) -> int:
		size = len(nums)
		i = 0
		jumps = 0
		while i + nums[i] < size - 1:
			big = i
			for j in range(i + 1, min(i + nums[i] + 1, size)):
				big = j if j + nums[j] > big + nums[big] else big
			i = big
			jumps += 1
		return jumps if i == size - 1 else jumps + 1
