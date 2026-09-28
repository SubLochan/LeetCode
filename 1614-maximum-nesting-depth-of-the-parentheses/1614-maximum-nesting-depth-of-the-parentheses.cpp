class Solution {
public:
    int maxDepth(string s) {
        stack<int> stk;
        int res = INT_MIN;
        for(char ch : s){
            if(ch =='('){
                stk.push(ch);
            }
            else if(ch == ')'){
                stk.pop();
            }
            res = max(res,(int)stk.size());
        }
        return res;
    }
};