class Solution {
    public boolean uniformArray(int[] nums1) {
        int mn = nums1[0];
        boolean odd = false;
        for(int x : nums1){
            if(x < mn){
                mn = x;
            }

            if(x % 2 != 0){
                odd = true;
            }
        }
        if(mn % 2 != 0){
            return true;
        }
        return !odd;
    }
}