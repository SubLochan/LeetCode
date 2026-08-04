class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        n = max(nums)
        p = min(nums)
        res = []
        for i in range(p,n+1):
            if i not in nums:
                res.append(i)
        return res