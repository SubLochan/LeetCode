class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for(char ch : s)    mp[ch]++;
        int t = -1;
        for(auto [k,v] : mp){
            if(t == -1){
                t = v;
            }
            else if(t != v){
                return false;
            }
        }
        return true;
    }
};