class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        multimap<int,string,greater<int>>mp;
            for(int i = 0 ; i < n ; i++){
                mp.insert({heights[i],names[i]});
            }
        vector<string>res;
        for(auto [k,v] : mp){
            res.push_back(v);
        }
        return res;
    }
};