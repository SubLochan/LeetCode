class Solution {
    private int fun(int n){

        int rev = 0;
        while(n > 0){
            int d  = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }
        return rev;
    }

    private boolean chk(int k){
        if(k < 2)   return false;
        for(int i = 2 ; i <= k/2 ; i++){
            if(k % i == 0){
                return false;
            }
        }
        return true;
    }
    public int sumOfPrimesInRange(int n) {
        int s = 0,rev;  
        rev = fun(n);
        int st = Math.min(n,rev) , end = Math.max(n,rev);
        for(int i = st ; i <= end ; i++){
            if(chk(i) == true){
                s += i;
            }
        }
        return s;
    }
}