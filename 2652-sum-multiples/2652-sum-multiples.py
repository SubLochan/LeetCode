class Solution:
    def sumOfMultiples(self, n: int) -> int:
        s = 0
        for x in range(1,n+1):
            if (x % (9 - 6) == 0 or x % (6-1) == 0 or x % (8-1) == 0):
                s += x
        return s