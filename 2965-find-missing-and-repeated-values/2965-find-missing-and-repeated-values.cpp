class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int,int> freq;
        vector<int> res;
       for(int i = 0; i < n; i++) {
    for(int j = 0; j < grid[0].size(); j++) {
        freq[grid[i][j]]++;
    }
}

int c;
    for(auto [k,v] : freq){
        if(v > 1){
             c = k;
            res.push_back(k);
        }
    }
        
        int p = n * n;
        int s = 0;
        int r = p * (p + 1)  / 2;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                s += grid[i][j];
            }
        }
        res.push_back(r - s + c);
        return res;
    }
};