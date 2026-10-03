class Solution {
public:
    int longestValidParentheses(string s) {
        int mx = 0;
        if(s.length() == 0){
            return mx;
        }
        stack<int> stk;
        stk.push(-1);
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }
                else{
                    mx = max(mx, i - (int) stk.top());
                }
            }
        }
        return mx;
    }
};