class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        st = bin(x ^ y)
        c = 0
        for i in st:
            if i == '1':
                c += 1
        return c 