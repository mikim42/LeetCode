class Solution:
	def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
		counters = []
		res = []
		
		for s in strs:
			counter = [0 for i in range(0, 26)]
			for c in s:
				counter[ord(c) - ord('a')] += 1
			try:
				index = counters.index(counter)
				res[index].append(s)
			except:
				counters.append(counter)
				res.append([s])
		return res
