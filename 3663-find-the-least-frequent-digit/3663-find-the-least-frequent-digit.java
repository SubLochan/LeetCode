class Solution {
    public int getLeastFrequentDigit(int n) {
       List<Integer> val = new ArrayList<>();
       Map<Character,Integer> mp = new HashMap<>();
       String s = String.valueOf(n);
       for(char ch : s.toCharArray()){
        mp.put(ch,mp.getOrDefault(ch,0) + 1);
       }
       int mn = Integer.MAX_VALUE;
         for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            mn = Math.min(mn, entry.getValue());
        }

        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            if (entry.getValue() == mn) {
                val.add(entry.getKey() - '0');
            }
        }
        return Collections.min(val);
    }
}