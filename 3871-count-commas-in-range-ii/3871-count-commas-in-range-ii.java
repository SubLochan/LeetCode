class Solution {
    public long countCommas(long n) {
        if(n < 1000)    return 0;
         long k = 1000 , c = 0;

        while(k <= n){
            c += n - k + 1;
            k *= 1000;
        }
        return c;
    }
}