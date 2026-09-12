class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c= 0;
        for(int el : nums){
            string s = to_string(el);
            if(s.size() % 2 == 0){
                c++;
            }
        }
        return c;
    }
};