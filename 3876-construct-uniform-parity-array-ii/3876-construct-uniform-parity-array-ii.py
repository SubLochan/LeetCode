class Solution(object):
    def uniformArray(self, nums1):
        mn = nums1[0]
        odd = False

        for x in nums1:
            if x < mn:
                mn = x
            if x % 2 == 1:
                odd = True

        if mn % 2 == 1:
            return True
        return not odd
