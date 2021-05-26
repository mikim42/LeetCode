class Solution:
	def minPartitions(self, n: str) -> int:
		high = 0
		for x in n:
			high = max(high, int(x))
		return high
