class Solution {
    public boolean validDigit(int n, int x) {
        String s =String.valueOf(n);
        boolean chk = s.contains(String.valueOf(x));
        return chk && s.charAt(0) != (char)x + '0';
    }
}