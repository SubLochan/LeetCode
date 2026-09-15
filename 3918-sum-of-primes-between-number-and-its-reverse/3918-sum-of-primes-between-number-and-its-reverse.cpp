class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int s = 0,rev;  
        rev = fun(n);
        int st = min(n,rev) , end = max(n,rev);
        for(int i = st ; i <= end ; i++){
            if(chk(i)){
                s += i;
            }
        }
        return s;
    }
    private:
     int fun(int n){

        int rev = 0;
        while(n > 0){
            int d  = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }
        return rev;
    }

     bool chk(int k){
        if(k < 2)   return false;
        for(int i = 2 ; i <= k/2 ; i++){
            if(k % i == 0){
                return false;
            }
        }
        return true;
    }
};