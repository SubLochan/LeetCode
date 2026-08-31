class Solution {
    public boolean canAliceWin(int[] nums) {
        int sd = 0 , ld = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] <= 9){
                sd += nums[i];
            }
            else{
                ld += nums[i];
            }
        }
        return sd != ld;
    }
}