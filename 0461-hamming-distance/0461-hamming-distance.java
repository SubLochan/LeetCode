class Solution {
    public int hammingDistance(int x, int y) {
        String binary = Integer.toBinaryString( x ^ y );

        int c = 0;
        for(int i = 0 ; i < binary.length() ; i++){
            if(binary.charAt(i) == '1'){
                c++;
            }
        }
        return c;

    }
}