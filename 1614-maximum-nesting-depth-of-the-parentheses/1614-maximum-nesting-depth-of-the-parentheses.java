class Solution {
    public int maxDepth(String s) {
        Stack<Character> stk = new Stack<>();
        int res = -1;
        for(char ch : s.toCharArray()){
            if(ch == '('){
                stk.add(ch);
            }
            else if(ch == ')'){
                stk.pop();
            }
            res = Math.max(res, (int)stk.size());
        }
        return res;

    }
}