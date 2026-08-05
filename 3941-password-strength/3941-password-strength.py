class Solution:
    def passwordStrength(self, password: str) -> int:
        p1="abcdefghijklmnopqrstuvwxyz"
        p2="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        p3="0123456789"
        p4="!@#$"
        res = 0
        for ch in set(password):
            if ch in p1:
                res += 1
            elif ch in p2:
                res += 2
            elif ch in p3:
                res += 3
            else:
                res += 5
        return res
            


        