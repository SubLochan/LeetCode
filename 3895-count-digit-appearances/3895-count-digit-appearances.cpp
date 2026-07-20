class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c = 0;
        char d = digit + '0';
        for(int n : nums){
            string s1 = to_string(n);
            for(char ch : s1){
                if(ch == d){
                    c++;
                }
            }
        }
        return c;
    }
};