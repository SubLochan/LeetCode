class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c = 0;
        for(int x = low ; x <= high ; x++ ){
            string s = to_string(x);
            int l = 0 , r = 0;
            int n = s.size();
            if(n % 2 != 0)  continue;
            for(int i = 0 ; i < n ; i++){
                if(i < n /2){
                    l += (s[i] - '0');
                }
                else{
                r += (s[i] - '0');
                }
            }
            if(l == r){
                c++;
            }
        }
        return c;
    }
};