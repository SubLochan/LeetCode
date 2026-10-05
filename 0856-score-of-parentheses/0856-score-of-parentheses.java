class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer> stk = new Stack<>();
        int c = 0;

        for(int i = 0; i < s.length(); i++) {

            if(s.charAt(i) == '(') {
                stk.push(c);
                c = 0;
            }
            else {
                int prev = stk.pop();

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
}