class Solution(object):
    def canAliceWin(self, nums):
        ls , ss = 0 , 0
        for el in nums:
            if el <= 9:
                ss += el
            else:
                ls += el
        return ss != ls
        