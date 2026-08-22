class Solution {
public:
    bool checkDivisibility(int n) {
        if(n < 10){
            return n % (n+n) == 0;
        }
        string st = to_string(n);
        int s = 0 , p = 1;
        for(char ch : st){
            s+= ch -'0';
            p *= ch -'0';
        }
        return n % (s + p) == 0;
    }
};