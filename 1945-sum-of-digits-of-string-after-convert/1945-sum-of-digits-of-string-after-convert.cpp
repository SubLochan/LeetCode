class Solution {
public:
    int getLucky(string s, int k) {
        map<char,int> mp;
        int c = 1;
        for(char ch = 'a'; ch <= 'z' ; ch++){
            mp[ch] = c;
            c++;
        }
        string inter;
        for(char ch : s){
            inter += to_string(mp[ch]);
        }
        int res = 0;
        while(k--){
            res = 0;
            for(char ch : inter){
                res += (ch - '0');
            }
            inter = to_string(res);  
        }
        return res;
    }
};