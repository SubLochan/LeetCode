class Solution {
    public int getLucky(String s, int k) {
        Map<Character,Integer> mp = new HashMap<>();
        int ct = 1 , res = 0;
        for(char c = 'a' ; c <= 'z' ; c++){
            mp.put(c ,ct);
            ct++;
        }
        StringBuilder inter = new StringBuilder();
        for(char ch : s.toCharArray()){
            inter.append(mp.get(ch));
        }
        String str = inter.toString();
        
        while(k > 0){
            res = 0;
            for(char ch : str.toCharArray()){
                res += (ch - '0');
            }
            str = String.valueOf(res);
            k--;
        }
        return res;
    }
}