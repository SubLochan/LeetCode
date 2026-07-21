class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0 , mx = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++ ){
            cur += nums[i];
            mx = max(mx,cur);
            if(cur < 0){
                cur = 0;
            }
        }
        return mx;

    }
};