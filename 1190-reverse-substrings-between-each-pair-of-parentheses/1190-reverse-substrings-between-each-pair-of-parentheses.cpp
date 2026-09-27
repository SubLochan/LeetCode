class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<int> stk;
        vector<int> pair (n);
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                stk.push(i);
            }
            if(s[i] == ')'){
                int j = stk.top();
                stk.pop();
                pair[i] = j;
                pair[j] = i;
            }
        }
        string res;
        int cur = 0 , d = 1;
        while(cur < n){
            if(s[cur] == '(' || s[cur] == ')'){
                cur = pair[cur];
                d = -d;
            }
            else{
                res += s[cur];
            }
            cur += d;
        }
        
    return res;
    }
};