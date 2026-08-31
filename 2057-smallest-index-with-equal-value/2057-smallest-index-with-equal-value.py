class Solution(object):
    def smallestEqual(self, nums):
        for idx in range(len(nums)):
            if idx % 10 == nums[idx]:
                return idx
        return -1
        