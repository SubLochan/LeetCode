class Solution {
    public String evaluate(String s, List<List<String>> knowledge) {
        Map<String,String> mp = new HashMap<>();
        for(List<String> el : knowledge){
            mp.put(el.get(0),el.get(1));
        }
        StringBuilder res = new StringBuilder();
        int st = -1;
        for(int i = 0 ; i < s.length(); i++){
            char c = s.charAt(i);
            if(c == '('){
                st = i;

            }
            else if(c == ')'){
                String k = s.substring(st + 1 , i);
                res.append(mp.getOrDefault(k,"?"));
                st = -1;
            }
            else if(st < 0){
                res.append(c);
            }
        }
        return res.toString();

    }
}