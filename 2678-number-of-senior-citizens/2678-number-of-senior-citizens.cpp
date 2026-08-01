class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for(string ent : details){
            string age = ent.substr(ent.size() - 4, 2);
            int num = stoi(age);
            if(num > 60){
                c++;
            }
        }
        return c;
    }
};
