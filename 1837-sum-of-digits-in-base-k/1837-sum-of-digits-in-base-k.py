class Solution(object):
    def sumBase(self, n, k):
        t = 0
        while(n > 0):
            t += n % k
            n //= k
        return t
        