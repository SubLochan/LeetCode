class Solution {
    public int[] twoSum(int[] nums, int target) {

        int l = 0, r = 1;

        while(l < nums.length && r < nums.length){

            if(nums[l] + nums[r] == target){
                return new int[] {l, r};
            }

            r++;

            if(r == nums.length){
                l++;
                r = l + 1;
            }
        }

        return new int[] {};
    }
}