class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder filt = new StringBuilder();
        for(char ch : s.toCharArray()){
            if(Character.isLetterOrDigit(ch)){
                filt.append(Character.toLowerCase(ch));
            }
        }
        StringBuilder rev = new StringBuilder();
        for(int i = filt.length() - 1 ; i >= 0 ; i--){
            rev.append(filt.charAt(i));
        }
        return filt.toString().equals(rev.toString());
    }
}