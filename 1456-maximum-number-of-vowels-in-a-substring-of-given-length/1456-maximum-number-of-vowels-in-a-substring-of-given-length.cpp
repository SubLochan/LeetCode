class Solution {
public:
    auto isVowel(char c){
        return c== 'a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {
        int cur_vwl = 0;
        for(int i = 0 ; i < k ; i++){
            if(isVowel(s[i])){
                cur_vwl++;
            }
        }
        int mx_vwl = cur_vwl;

        for(int i = k ; i < s.length() ; i++){
            if(isVowel(s[i])){
                cur_vwl++;
            }
            if(isVowel(s[i-k])){
                cur_vwl--;
            }
            mx_vwl = max(cur_vwl,mx_vwl);

            if(mx_vwl == k){
                return k;
            }
        }
        return mx_vwl;
    }
};