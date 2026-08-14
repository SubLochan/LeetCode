class Solution {
public:
    int maximumLengthSubstring(string s) {
        deque<char> dq;
        unordered_map<char,int>frq;
        int res = 0;
        for(char ch : s)  {
         dq.push_back(ch); 
         frq[ch]++;

        while(frq[ch] > 2){
            char frt = dq.front();
            dq.pop_front();
            frq[frt]--;
        }
        res = max(res,(int)dq.size());

        }
        return res;
    }
};