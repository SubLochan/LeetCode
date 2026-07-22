class Solution {
public:
    string reversePrefix(string s, int k) {
        string res = s.substr(0,k);
        reverse(res.begin(),res.end());
        return res + s.substr(k);
        return s;
    }
};