class Solution(object):
    def checkDivisibility(self, n):
        st = str(n)
        s,p = 0,1
        for ch in st:
            s += int(ch)
            p *= int(ch)
        return n % (s+p) == 0

        