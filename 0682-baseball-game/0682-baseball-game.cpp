class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        
        for (string op : operations) {
            if (isdigit(op[0]) || (op.size() > 1 && isdigit(op[1]))) {
                record.push_back(stoi(op));
            } else if (op == "C") {
                record.pop_back();
            } else if (op == "D") {
                record.push_back(record.back() * 2);
            } else if (op == "+") {
                record.push_back(record[record.size()-1] + record[record.size()-2]);
            }
        }
        
        int res = 0;
        for (int num : record) res += num;
        return res;
    }
};
