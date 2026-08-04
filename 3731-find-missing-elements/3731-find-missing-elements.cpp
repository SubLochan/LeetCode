class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        auto mx = max_element(nums.begin(),nums.end());
        auto mn = min_element(nums.begin(),nums.end());
        int l = *mn , r = *mx;
        vector<int> res;
        for(int i = l ; i <= r ; i++){
            if(find(nums.begin(),nums.end(),i) == nums.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};