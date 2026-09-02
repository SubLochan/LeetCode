class Solution {
    public boolean uniformArray(int[] nums1) {
        int n = nums1.length;
        int[] nums2 = new int[n];
        int j = 0 , t = 0 , f = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            nums2[i] = nums1[i] - nums1[j];
            j++;
        }
        for(int i = 0 ; i < n - 1 ; i++){
            if(nums2[i] % 2 == 0){
                f++;
            }
            else{
                t++;
            }
        }
        return f == n - 1 || t == n - 1;
    }
}