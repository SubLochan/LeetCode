class Solution(object):
    def rob(self, nums):
       n = len(nums)
       if n == 1: return nums[0]
       if n == 2: return max(nums)

       mx = [nums[0],max(nums[0],nums[1])]

       for i in range(2,n):
           cur = max(nums[i]+mx[i-2],mx[i-1])
           mx.append(cur)
       return mx[-1]
        