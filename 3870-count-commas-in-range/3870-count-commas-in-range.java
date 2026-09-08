class Solution {
    public int countCommas(int n) {
        int c = 0;
        if(n < 1000)    return c;
        else{
            int k = 1000;
            while(k <= n){
                c++;
                k++;
            }
        }
        return c;
    }
}