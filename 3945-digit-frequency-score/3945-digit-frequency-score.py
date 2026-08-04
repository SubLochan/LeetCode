from collections import defaultdict
class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        freq = defaultdict(int)
        while(n > 0):
            dig = n % 10
            freq[dig] += 1
            n //= 10
        s = 0
        for k in freq:
            s += (k * freq[k])
        return int(s)


        