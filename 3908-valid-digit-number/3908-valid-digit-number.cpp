class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);
        bool ck =  find(s.begin(),s.end(),x+'0') != s.end();
        return ck && s[0] != x +'0';
    }
};