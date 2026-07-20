class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            auto mn = min_element(nums.begin(),nums.end());
            *mn *= multiplier;  
        }
        return nums;
    }
};