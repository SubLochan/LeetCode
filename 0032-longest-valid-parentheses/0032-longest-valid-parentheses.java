class Solution {
    public int longestValidParentheses(String s) {
        int mx = 0;
        if(s.length() == 0) return mx;
        Stack<Integer> stk = new Stack<>();
        stk.push(-1);
        for(int i = 0 ; i < s.length() ; i++){
            if(s.charAt(i) == '('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(stk.isEmpty()){
                    stk.push(i);
                }
                else{
                    mx = Math.max(mx, i - stk.peek());
                }
            }
        }
        return mx;
    }
}