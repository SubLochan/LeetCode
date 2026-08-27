class Solution {

    public void swap(String[] words, int a, int b) {
        String c = words[a];
        words[a] = words[b];
        words[b] = c;
    }

    public String reverseWords(String s) {
        
        String[] words = s.trim().split("\\s+");

        int l = 0, r = words.length - 1; 
        while (l < r) {
            swap(words, l, r);
            l++;
            r--;
        }

        return String.join(" ", words);
    }
}
