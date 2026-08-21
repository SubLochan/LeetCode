class Solution(object):
    def maximumWealth(self, accounts):
        mx = -1
        for i in range(len(accounts)):
            s = 0
            for j in range (len(accounts[i])):
                s += accounts[i][j]
                mx = max(s,mx)
        return mx
        