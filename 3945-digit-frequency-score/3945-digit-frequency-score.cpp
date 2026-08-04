
class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp; int s = 0;
       while(n > 0){
        int d = n % 10;
            mp[d]++;
            n /= 10;
       }
        for(auto [k,v] : mp){
            s += (k * v);
        }

        return s;
    }
};