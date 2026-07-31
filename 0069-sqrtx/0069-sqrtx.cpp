class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        int l = 1, h = x, res = 0;
        while (l <= h) {
            long long m = l + (h - l) / 2;  
            if (m * m == x) {
                return m;
            }
            if (m * m < x) {
                res = m;      
                l = m + 1;
            } else {
                h = m - 1;
            }
        }
        return res;
    }
};
