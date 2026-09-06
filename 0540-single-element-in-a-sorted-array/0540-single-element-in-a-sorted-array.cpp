class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp; int res = 0;
        for(int x : nums)   mp[x]++;
        for(auto [k,v] : mp){
            if(v == 1){
                res = k;
            }
        }
        return res;
    }
};