class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string wrd; int c = 0;
        while(ss >> wrd){
            c++;
        }
        return c;
    }
};