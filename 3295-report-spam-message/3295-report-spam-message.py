class Solution(object):
    def reportSpam(self, message, bannedWords):
        c = 0
        ban = set(bannedWords)
        for i in message:
            if i in ban:
                c += 1
        return c >= 2
        