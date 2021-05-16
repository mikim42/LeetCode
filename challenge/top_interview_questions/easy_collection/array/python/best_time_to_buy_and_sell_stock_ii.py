class Solution:
	def maxProfit(self, prices: List[int]) -> int:
		profit = 0
		high  = prices[0]
		low = prices[0]
		for p in prices:
			if p < high:
				profit += high - low
				low = 3 * (10 ** 4) + 1
				high = 0
			low = min(low, p)
			high = max(high, p)
		return profit + (high - low)
