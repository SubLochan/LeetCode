class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        mp = {}
        c = 0
        for i in range(ord('a'), ord('z') + 1):
            mp[chr(i)] = c
            c += 1

        f, s, t = "", "", ""
        for ch in firstWord:
            f += chr(mp[ch] + ord('0'))
        for ch in secondWord:
            s += chr(mp[ch] + ord('0'))
        for ch in targetWord:
            t += chr(mp[ch] + ord('0'))

        if len(f) > 1 and f[0] == '0':
            f = f[1:]
        if len(s) > 1 and s[0] == '0':
            s = s[1:]
        if len(t) > 1 and t[0] == '0':
            t = t[1:]

        a = int(f)
        b = int(s)
        d = int(t)

        return (a + b) == d
