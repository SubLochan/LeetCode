class Solution {
public:
    int findGCD(vector<int>& nums) {
        int res;
        auto mx = max_element(nums.begin(),nums.end());
        auto mn = min_element(nums.begin(),nums.end());
        res = gcd(*mx,*mn);
        return res;
    }
};