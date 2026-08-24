class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int s = 0, n = nums.size();
        for(int i = 0 ; i < (1 << n) ; i++){
            int c = 0;
            for(int j = 0 ; j < n ; j++){
               if(i & (1 << j)){
                c ^= nums[j];
               }
            }
            s += c;
        }
        return s;
    }
};