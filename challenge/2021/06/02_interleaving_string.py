class Solution:
	def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
		n, m, o = len(s1), len(s2), len(s3)
		if n + m != o:
			return False
		dp = [True] * (m + 1)
		for i in range(1, m + 1):
			dp[i] = dp[i - 1] and s2[i - 1] == s3[i - 1]
		for i in range(1, n + 1):
			dp[0] = dp[0] and s1[i - 1] == s3[i - 1]
			for j in range(1, m + 1):
				dp[j] = (dp[j] and s1[i - 1] == s3[i - 1 + j]) or\
						(dp[j - 1] and s2[j - 1] == s3[j - 1 + i])
		return dp[-1]
