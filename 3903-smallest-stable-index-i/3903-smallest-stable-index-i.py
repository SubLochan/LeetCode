class Solution(object):
    def firstStableIndex(self, nums, k):
        n = len(nums)
        for i in range(n):
            mn = mx = nums[i]
            for j in range(i):
                mx = max(mx,nums[j])
            for j in range(i+1, n ):
                mn = min(mn,nums[j])
            if mx - mn <= k:
                return i
        return -1

        