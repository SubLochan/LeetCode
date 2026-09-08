class Solution:
    def countCommas(self, n: int) -> int:
        c = 0
        if n < 1000:
            return c
        k = 1000
        while k <= n:
            k += 1
            c += 1
        return c