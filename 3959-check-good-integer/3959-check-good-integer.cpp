class Solution {
public:
    bool checkGoodInteger(int n) {
        string s = to_string(n);
        int d_s = 0 , s_s = 0;
        for(int el : s){
            d_s += el - '0';
            s_s += (el - '0') * (el - '0');
        }
        return (s_s - d_s)>= 50;
    }
};