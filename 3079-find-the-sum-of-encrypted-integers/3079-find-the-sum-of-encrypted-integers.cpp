class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int s = 0;
        for(int el : nums ){
            if(el <= 9){
                s += el;
            }
            else{
                string st = to_string(el);
                int n = st.size();
                char mx = *max_element(st.begin(),st.end());
                string res;
                while(n--){
                res += mx;
                }
                s += stoi(res);
            }
        }
        return s;
    }
};