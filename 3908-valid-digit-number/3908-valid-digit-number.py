class Solution:
    def validDigit(self, n: int, x: int) -> bool:
        s = str(n)
        chk = False
        if str(x) in s:
            chk = True
        return chk and s[0] != str(x)