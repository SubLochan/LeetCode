class Solution {
public:
    string to_lower(string s){
        for(char &ch : s){
            ch = tolower(ch);
        }
        return s;
    }
    int prefixCount(vector<string>& words, string pref) {
        int c =0;
        for(string wrd : words){
            wrd = to_lower(wrd);
            if(wrd.rfind(pref,0)==0){
                c++;
            }
        }
        return c;
    }
};