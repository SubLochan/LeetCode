class Solution {
    public String[] findWords(String[] words) {
        HashSet<Character> r1 = new HashSet<>(Arrays.asList('q','w','e','r','t','y','u','i','o','p'));
        HashSet<Character> r2 = new HashSet<>(Arrays.asList('a','s','d','f','g','h','j','k','l'));
        HashSet<Character> r3 = new HashSet<>(Arrays.asList('z','x','c','v','b','n','m'));
        List<String> res = new ArrayList<>();
        for(String wrd : words){
            String lower = wrd.toLowerCase();
            Set<Character> st = new HashSet<>();
            for(char ch : lower.toCharArray()){
                st.add(ch);
            }
            if(r1.containsAll(st) || r2.containsAll(st) || r3.containsAll(st)){
                res.add(wrd);
            }
        }
        return res.toArray(new String[0]);
    }
}