class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for(string ent : details){
            int n = ent.size();
            string age="";
            age += ent[n-4];
            age += ent[n-3];
        
            int num = stoi(age);
            
            if(num > 60){
                c++;
            }
        }
        return c;
    }
};
