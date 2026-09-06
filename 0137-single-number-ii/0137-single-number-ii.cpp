class Solution {
public:
    int singleNumber(vector<int>& nums) {
         map<int,int>mp;
        int res = 0;
        for(int el : nums){
            mp[el]++;
        }
        for(auto [k,v] : mp){
            if(v == 1){
                res = k;
            }
        }
        return res;
    }
};