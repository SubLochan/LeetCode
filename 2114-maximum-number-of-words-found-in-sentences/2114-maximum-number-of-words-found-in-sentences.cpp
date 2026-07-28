#include<sstream>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c, mx = 0 ;
        string wrd;
        for(string str : sentences){
            c = 0;
        stringstream ss(str);
           while(ss >> wrd){
                c++;
           }
           mx = max(mx,c);
        }
        return mx;
    }
};