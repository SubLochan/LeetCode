class Solution(object):
    def resultArray(self, nums):
        l1,l2 = [],[]
        l1.append(nums[0])
        l2.append(nums[1])
        for i in range(2,len(nums)):
            if l1[-1] > l2[-1]:
                l1.append(nums[i])
            else:
                l2.append(nums[i])
        res = l1 + l2
        return res

        