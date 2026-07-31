class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c= 0;
        vector<int>frq;
        for(int el : nums){
            if(el == 1){
                c++;
            }
            else{
                c = 0;
            }
            frq.push_back(c);
        }
        auto mx = max_element(frq.begin(),frq.end());
        return *mx;
    }
};