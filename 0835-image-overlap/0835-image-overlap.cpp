class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int,int>> o1,o2;
        for(int r = 0 ; r < n ; ++r){
            for(int c = 0 ; c < n ; ++c){
                if(img1[r][c] == 1) o1.push_back({r,c});
                if(img2[r][c] == 1) o2.push_back({r,c});
            }
        }
        map<pair<int,int>,int>sc;
        int mx = 0;
        for(auto p1 : o1){
            for(auto p2 : o2){
                pair<int,int> sh = {p2.first - p1.first, p2.second - p1.second};
                sc[sh]++;
                mx = max(mx,sc[sh]);
            }
        }
        return mx;
    }
};