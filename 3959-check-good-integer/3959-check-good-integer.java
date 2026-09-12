class Solution {
    public boolean checkGoodInteger(int n) {
        String s = String.valueOf(n);
        int s_s = 0 , d_s = 0;
        for(char ch : s.toCharArray()){
            s_s += (ch - '0') * (ch - '0');
            d_s += (ch - '0');
        }
        return (s_s - d_s)>=50;
    }
}