class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string wrd, res;
        vector<string>arr(10);
        while(ss >> wrd){
            int pos = wrd.back() - '0';
            wrd.pop_back();
            arr[pos] = wrd;
        }
        for(auto& word : arr){
            if(!word.empty()){
                res += word + " ";
            }
        }
        if(!res.empty())res.pop_back();
        
        return res;
    }
};