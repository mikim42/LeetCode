class Solution:
	def maxProduct(self, words: List[str]) -> int:
		d = defaultdict(int)
		res = 0
		for w in words:
			mask = 0
			for c in set(w):
				mask |= 1 << (ord(c) - ord('a'))
			d[mask] = max(d[mask], len(w))
		for m1, m2 in combinations(d, 2):
			if m1 & m2 == 0:
				res = max(res, d[m1] * d[m2])
		return res
