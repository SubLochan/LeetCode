class Solution {
    public String reverseParentheses(String s) {
        int n = s.length();
        Stack<Integer> stk = new Stack<>();
        int[] pair = new int[n];

        for(int i = 0 ; i < n ; i++){
            if(s.charAt(i) == '('){
                stk.push(i);
            }
            if(s.charAt(i) == ')'){
                int j = stk.pop();
                pair[i] = j;
                pair[j] = i;
            }
        }
        StringBuilder res = new StringBuilder();
        int cur = 0 , d = 1;
        while(cur < n){
            if(s.charAt(cur) == '(' || s.charAt(cur) == ')'){
                cur = pair[cur];
                d = - d;

            }
            else{
                res.append(s.charAt(cur));
            }
            cur += d;
        }
        return res.toString();
    }
}