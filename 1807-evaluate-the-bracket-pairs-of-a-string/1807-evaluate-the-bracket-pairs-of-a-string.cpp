class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        for(vector<string> el : knowledge){
            mp[el[0]] = el[1];
        }
        string res = "";
        int st = -1;
        for(int i = 0 ; i < s.length() ; i++){
            char c = s[i];
            if(c == '('){
                st =  i;
            }
            else if (c == ')'){
                string k = s.substr(st+1 , i - st - 1);
                if(mp.count(k)){
                 res += mp[k];
                }
                else{
                res += "?";
                }
                st = -1;
            }

            else if(st < 0){
                res += s[i];
            }
        }
        return res;
    }
};