class Solution {
public:
    bool PalCheck(string word){
        int l = 0 , r = word.size() - 1;
        while(l <= r){
            if(word[l] != word[r]){
                return false;
            }
            l++;    r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string res;
        for(string wrd : words){
            if(PalCheck(wrd)){
                res = wrd;
                break;
            }
        }
        return res;
    }
};