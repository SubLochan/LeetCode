class Solution {
    public int minAddToMakeValid(String s) {
        int c = 0 , mn = 0;
        for(char ch : s.toCharArray()){
            if(ch == '('){
                c++;
            }
            else{
                if(c > 0)   c--;
                else    mn++;
            }
        }
        return c + mn;
    }
}