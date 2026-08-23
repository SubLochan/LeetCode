class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            int j = 0;
            while (j < t.size() && t[j] != s[i]) {
                j++;
            }
            res += abs(i - j);
        }
        return res;
    }
};