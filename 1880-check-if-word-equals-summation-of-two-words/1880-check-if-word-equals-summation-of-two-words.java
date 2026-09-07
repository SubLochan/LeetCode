import java.util.*;

class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        Map<Character,Integer> mp = new HashMap<>();
        int c = 0;
        for(char i = 'a' ; i <= 'z' ; i++){
            mp.put(i,c++);
        }

        String f = "", sc = "", t = "";
        for(char ch : firstWord.toCharArray()) f += String.valueOf(mp.get(ch));
        for(char ch : secondWord.toCharArray()) sc += String.valueOf(mp.get(ch));
        for(char ch : targetWord.toCharArray()) t += String.valueOf(mp.get(ch));

        if(f.length() > 1 && f.charAt(0) == '0') f = f.substring(1);
        if(sc.length() > 1 && sc.charAt(0) == '0') sc = sc.substring(1);
        if(t.length() > 1 && t.charAt(0) == '0') t = t.substring(1);

        int a = Integer.parseInt(f);
        int b = Integer.parseInt(sc);
        int d = Integer.parseInt(t);

        return (a + b) == d;
    }
}
