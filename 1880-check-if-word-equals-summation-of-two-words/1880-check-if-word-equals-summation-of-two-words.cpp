class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        map<char,int> mp;
        int c = 0;
        for(char i = 'a' ; i <= 'z' ; i++){
            mp[i] = c++;
        }

        string f, s, t;
        for(char c : firstWord) f += to_string(mp[c]);
        for(char c : secondWord) s += to_string(mp[c]);
        for(char c : targetWord) t += to_string(mp[c]);

        while(f.size() > 1 && f[0] == '0') f.erase(0, 1);
        while(s.size() > 1 && s[0] == '0') s.erase(0, 1);
        while(t.size() > 1 && t[0] == '0') t.erase(0, 1);

        int a = stoi(f), b = stoi(s), d = stoi(t);
        return (a + b) == d;
    }
};
