class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int c = 0, mx = 0;
        for(int el : nums){
            if(el == 1){
                c++;
            }
            else{
                c = 0;
            }
            mx = Math.max(mx,c);
        }
        return mx;
    }
}