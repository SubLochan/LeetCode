class Solution {
    public int pivotInteger(int n) {
        int s = n * (n + 1) / 2;
        double p = Math.sqrt(s);

        return (p - Math.ceil(p) == 0)?  (int) p : -1;
        
    }
}