class Solution(object):
    def missingMultiple(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n = 1
        while(n * k in nums):
            n += 1
        return n * k
        