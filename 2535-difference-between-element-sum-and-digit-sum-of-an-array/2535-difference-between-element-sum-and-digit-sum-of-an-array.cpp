class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s = 0, p = 0;
        for(int n : nums)   s+= n;
        for(int i = 0 ; i < nums.size() ; i++){
               if(nums[i] >= 10){
            while(nums[i] > 0){
                p += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        else{
            p += nums[i];
        }  
        }
        return abs(p-s); 
    }

    
};