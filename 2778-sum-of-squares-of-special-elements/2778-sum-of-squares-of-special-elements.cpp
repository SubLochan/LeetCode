class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>num;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(n % (i+ 1)  == 0){
                num.push_back(nums[i]);
            }
        }
        int res = 0;
        for(int n : num){
            res += n * n;
        }
        return res;
    }
};