class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a,b;
        for(int i : nums1){
            if(!contains(nums2,i) && !contains(a,i)){
                a.push_back(i);
            }
        }
        for(int j : nums2){
            if(!contains(nums1,j) && !contains(b,j)){
                b.push_back(j);
            }
        }
        return {a,b};
    }
    bool contains(vector<int> arr , int x){
        for(int i : arr){
            if(i == x){
                return true;
            }
        }
        return false;
    }
};