class Solution:
	def removeDuplicates(self, nums: List[int]) -> int:
		counter = 0
		for i in range(1, len(nums)):
			if nums[counter] != nums[i]:
			nums[counter + 1], nums[i] = nums[i], nums[counter + 1]
			counter += 1
		return counter + 1 if nums else 0
