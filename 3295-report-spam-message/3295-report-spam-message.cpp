class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        set<string> ban(bannedWords.begin(),bannedWords.end());
        int c = 0;
        for(string word : message){
            if(ban.count(word)){
                c++;
            }
        }
        return c >= 2;
    }
};