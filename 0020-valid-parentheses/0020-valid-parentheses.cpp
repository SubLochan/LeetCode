class Solution {
public:
    bool isValid(string s) {
    string stack;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') stack += ch;
        else {
            if (stack.empty()) return false;
            char top = stack.back();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
            stack.pop_back();
        }
    }
    return stack.empty();
}
};