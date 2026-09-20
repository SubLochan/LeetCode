class Solution {
    public int countSymmetricIntegers(int low, int high) {
        int c = 0;
        for(int x = low ; x <= high ; x++){
            String str = String.valueOf(x);
            int n = str.length();
            if(n % 2 != 0)  continue;
            int l = 0 , r = 0;
            for(int d = 0 ; d < n ; d++){
                if(d < n/2){
                    l += (str.charAt(d) - '0');
                }
                else{
                    r += (str.charAt(d) - '0');
                }
            }
            if (l == r){
                c++;
            }
        }
        return c;
    }
}