class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int>nums2(n);
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
        return t == n-1 || f == n-1;
    }
};