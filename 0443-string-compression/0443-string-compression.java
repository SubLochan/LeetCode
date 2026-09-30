class Solution {
    public int compress(char[] chars) {
        StringBuilder sb = new StringBuilder(); 
        char cur = '\0';    int len = 0;
        if(chars.length == 1){
            return 1;
        }
        for(char ch : chars){
                if(ch == cur){
                    len++;
                }
                else{
                    if(cur != '\0'){
                        sb.append(cur);
                    
                    if(len > 1){
                        sb.append(len);
                    }

                }  
                    cur = ch;
                    len = 1;
                }
        }
        if(cur != '\0'){
            sb.append(cur);
            if(len > 1){
            sb.append(len);
            }
        }

        for(int i = 0 ; i < sb.length() ; i++){
            chars[i] = sb.charAt(i);
        }
        
       return sb.toString().length();
    }
}