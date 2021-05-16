class Solution:
	def lengthOfLongestSubstring(self, s: str) -> int:
		pos = [-1 for i in range(0, 256)]
		longest, left = 0, 0
		
		for right in range(0, len(s)):
			curr = ord(s[right])
			if pos[curr] < left:
				longest = max(longest, right - left + 1)
			else:
				left = pos[curr] + 1
			pos[curr] = right;
		return longest
