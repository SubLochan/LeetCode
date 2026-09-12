class Solution {
    public int findNumbers(int[] nums) {
        int c = 0;
        for(int el : nums){
            String s = String.valueOf(el);
            if(s.length() % 2 == 0){
                c++;
            }
        }
        return c;
    }
}