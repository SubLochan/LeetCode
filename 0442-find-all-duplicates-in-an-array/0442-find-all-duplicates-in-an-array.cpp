#include<unordered_map>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int el : nums){
            mp[el] ++;
        }
        for(auto [k,v] : mp){
            if(v > 1){
                res.push_back(k);
            }
        }
        return res;
    }
};