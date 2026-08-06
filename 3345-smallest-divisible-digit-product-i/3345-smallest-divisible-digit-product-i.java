class Solution {
    public int smallestNumber(int n, int t) {
        int p = 1;
        char[] num = Integer.toString(n).toCharArray();
        for(char ch : num){
            p *= (ch - '0');
        }
        if(p % t == 0)  return n;
        return smallestNumber(n+1,t);
    }
}