class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;
        if(nums.size() <= 2){
            return nums;
        }
        else{
            map<int,int>mp;
            for(int x : nums)   mp[x]++;
            for(auto [k,v] : mp){
                if(v == 1){
                    res.push_back(k);
                }
            }
        }
        return res;
    }
};