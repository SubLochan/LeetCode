class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
         int sd = 0 , ld = 0;
        for(int num : nums){
            if(num <= 9){
                sd += num;
            }
            else{
                ld += num;
            }
        }
        return sd != ld;
    }
    
};