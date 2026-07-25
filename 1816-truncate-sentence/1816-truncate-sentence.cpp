class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string str = "";
        string wrd; int c = 0;
        while(ss >> wrd){
            c++;
            str += wrd;
            if(c == k)  break;
            str += " ";
        }
        return str;
    }
};