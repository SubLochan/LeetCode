class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        p = 1
        num = str(n)
        for ch in num:
            p *= int(ch)
        if p % t == 0:
            return n
        return self.smallestNumber(n+1,t)
