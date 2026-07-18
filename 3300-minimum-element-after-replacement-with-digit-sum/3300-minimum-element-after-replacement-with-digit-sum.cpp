class Solution {
public:
    int res;    vector<int>vec;
    int minElement(vector<int>& nums) {
        for(int n : nums){
            if(n >= 10){
            dig(n);
            }
            else{
                vec.push_back(n);
            }
        }
        auto mn = min_element(vec.begin(),vec.end());
        return *mn;
    }
    void dig(int n){
        int d , s = 0;
        while(n > 0){
            d = n % 10;
            n /= 10;
            s += d;
        }
        vec.push_back(s);
    }
};