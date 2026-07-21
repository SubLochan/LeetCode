class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i = 0;
        vector<int>res;
        for(string st : words){
            if(st.find(x) != string::npos)
                res.push_back(i);
            
            i++;
        }
        return res;
    }
};