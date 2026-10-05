class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        int c = 0;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(') {
                stk.push(c);
                c = 0;
            }
            else {
                int prev = stk.top();
                stk.pop();
                if(c == 0) {
                    c = prev + 1;
                }
                else {
                    c = prev + (2 * c);
                }
            }
        }

        return c;
    }
};