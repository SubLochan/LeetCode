class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int el : stones) {
            switch (el % 3) {
                case 0: cnt0++; break;
                case 1: cnt1++; break;
                case 2: cnt2++; break;
            }
        }

        if (cnt1 == 0 && cnt2 == 0) return false;
        if (cnt0 % 2 == 0) return cnt1 > 0 && cnt2 > 0;
        return abs(cnt1 - cnt2) > 2;
    }
};
