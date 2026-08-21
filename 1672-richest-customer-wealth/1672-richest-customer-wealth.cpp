class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s , mx = INT_MIN;
        for(int i = 0 ; i < accounts.size() ; i++){
            s = 0;
            for(int j = 0 ; j < accounts[i].size() ; j++){
                s += accounts[i][j];
                mx = max(s,mx);
            }
        }
        return mx;
    }
};