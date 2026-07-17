class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int>fr(friends.begin(),friends.end());
        vector<int>res;
        for(int ord : order){
            if(fr.count(ord)){
                res.push_back(ord);
            }
        }
        return res;
    }
};