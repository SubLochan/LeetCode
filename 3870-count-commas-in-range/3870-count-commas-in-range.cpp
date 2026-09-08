class Solution {
public:
    int countCommas(int n) {
        int c = 0;
       if(n < 1000){
            c = 0;
       }
       else{
        int k = 1000;
        while(k <= n){
            c++;
            k++;
        }

       }
       return c;
    }
};