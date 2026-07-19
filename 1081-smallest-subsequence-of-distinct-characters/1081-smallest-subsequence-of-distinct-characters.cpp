class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> ct(256,0);
        vector<bool> stk(256,false);

        for(char c : s) ct[c]++;
        string res;
        for(char c : s){
            ct[c]--;

            if(stk[c]) continue;

            while(!res.empty() && res.back() > c && ct[res.back()] > 0) {
                stk[res.back()] = false;
                res.pop_back();
            }
            res.push_back(c);
            stk[c] = true;
        }
        return res;
    }
};