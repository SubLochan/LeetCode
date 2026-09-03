class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        bool odd = false;
        for(int v : nums1){
            if(v < mn){
                mn = v;
            }

            if(v % 2 != 0){
                odd = true;
            }
        }

        if(mn % 2 != 0){
            return true;
        }
        return !odd;
    }
};