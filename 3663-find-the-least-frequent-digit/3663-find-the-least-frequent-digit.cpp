class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> val;
        map<char, int> mp;

        string s = to_string(n);

        for(char ch : s) {
            mp[ch]++;
        }

        int mn = INT_MAX;

        for(auto [k, v] : mp) {
            mn = min(mn, v);
        }

        for(auto [k, v] : mp) {
            if(v == mn) {
                val.push_back(k - '0');
            }
        }

        return *min_element(val.begin(), val.end());
    }
};