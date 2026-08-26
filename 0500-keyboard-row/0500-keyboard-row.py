class Solution(object):
    def findWords(self, words):
        l1 = []
        r1 , r2 ,r3 = set("qwertyuiop"),set("asdfghjkl"),set("zxcvbnm")
        for wrd in words:
             ws = set(wrd.lower())
             if ws <= r1 or ws <= r2 or ws <= r3:
                l1.append(wrd)
        return l1

        