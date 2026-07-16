class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        for(string str : word1) s1+= str;
        for(string st : word2) s2+= st;

        return s1 == s2;
    }
};