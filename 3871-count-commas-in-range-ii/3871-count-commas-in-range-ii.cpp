class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000)    return 0;
        long long k = 1000 , c = 0;

        while(k <= n){
            c += n - k + 1;
            k *= 1000;
        }
        return c;
    }
};