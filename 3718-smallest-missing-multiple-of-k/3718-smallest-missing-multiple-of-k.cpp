class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = 1;
        while(find(nums.begin(),nums.end(),n*k) != nums.end()){
            n++;
        }
        return n * k;
    }
};