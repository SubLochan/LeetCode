class Solution {
    public int minOperations(int[] nums, int x) {
      int s = 0;
        for(int el : nums)  s += el;
        int tgt = s - x;
        if(tgt < 0) return -1;
        int mx_len = -1, curr = 0 , l = 0;
        for(int r = 0 ; r < nums.length ; r++){
            curr += nums[r];
            while(curr > tgt && l <= r){
                curr -= nums[l];
                l++;
            }
            if(curr == tgt){
                mx_len = Math.max(mx_len,r - l + 1);
            }
        }
        if(mx_len != -1){
            return nums.length - mx_len;
        }
        return -1;  
    }
}