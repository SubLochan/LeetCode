class Solution(object):
    def uniformArray(self, nums1):
        n = len(nums1)
        l1 = []
        j , t , f = 0 , 0 , 0
        for i in range(0,n-1):
            l1.append(nums1[i] - nums1[j])
            j += 1
        for i in range(0,n-1):
            if l1[i] % 2 == 0:
                f += 1
            else:
                t += 1
        return t == n -1 or f == n - 1

        