class Solution {
    public int reverseDegree(String s) {
        char[] Ulpha = new char[26];
        int k = 0;
        for(char i = 'a' ; i <= 'z' ; i++){
            Ulpha[k] = i;
            k++;
        }
        int c = 0;
        for(int i = 0 ; i < s.length() ; i++){
           char ch =  s.charAt(i);
           for(int j = 0 ; j < Ulpha.length ; j++){
                if(Ulpha[j] == ch){
                    c += (26 - j) * (i + 1);
                    break;
                }
           }
        }
        return c;
    }
}