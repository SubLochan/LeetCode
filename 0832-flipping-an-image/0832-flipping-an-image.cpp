class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& row : image){
            reverse(row.begin(),row.end());

            for(auto& el : row){
                el = 1 - el;
            }
        }

        return image;
    }
};