class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int el : arr)   mp[el]++;
        set<int>vals;
        for(auto [k,v] : mp){
            vals.insert(v);
        }
        return vals.size() == mp.size();
        
    }
};