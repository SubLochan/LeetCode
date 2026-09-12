class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c= 0;
        for(int el : nums){
            if(fun(el) % 2 == 0){
                c++;
            }
        }
        return c;
    }

    int fun(int n){
        int c = 0;
        while(n > 0) {
            c++;
             n /= 10;
        }   
        return c;
    }
};