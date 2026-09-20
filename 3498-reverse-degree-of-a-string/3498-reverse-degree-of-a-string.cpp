class Solution {
public:
    int reverseDegree(string s) {
        vector<char> Ulpha (26);
        int k = 0;
        for(char i = 'a' ; i <= 'z' ; i++){
            Ulpha[k] = i;  
             k++;
        }
        int c = 0;
        for(int i = 0 ; i < s.size() ; i++){
            char ch = s[i];
            for(int  j = 0 ; j < 26 ; j++){
                if (Ulpha[j] == ch ){
                    c += (26 - j) * (i + 1);
                    break;
                }

                }
            }
        return c;
    }
};