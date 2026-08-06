class Solution {
public:
    int smallestNumber(int n, int t) {
        string num = to_string(n);
        int p = 1;
        for(char ch : num){
            p *= (ch - '0');
        }
        if(p % t == 0) return n;
        return smallestNumber(n+1,t);
    }
};