class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string wrd;
        deque<string> dq;

        while (ss >> wrd) {
            dq.push_front(wrd);
        }

        ostringstream oss;
        for (int i = 0; i < dq.size(); i++) {
            if (i > 0) oss << " ";
            oss << dq[i];
        }

        return oss.str();
    }
};
