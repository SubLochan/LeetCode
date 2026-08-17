class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < numbers.size() ; i++){
            int nd = target - numbers[i];
            if(mp.count(nd)){
                return {mp[nd]+1,i+1};
            }
            mp[numbers[i]] = i;
        }
        return {};
    }
};