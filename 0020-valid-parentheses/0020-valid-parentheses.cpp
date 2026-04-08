#include <string>
#include <stack>
class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 0) return false;
        stack<char> st;
        for (char sr : s) {
            if (sr == '(' || sr == '{' || sr == '[') {
                st.push(sr);
            } else if (sr == ')' || sr == '}' || sr == ']') {
                if (st.empty()) return false;
                char top = st.top();
                if (( sr == ')' && top == '(' ) ||
                    (sr == ']' && top == '[') ||
                    (sr == '}' && top == '{'))
                {
                 st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};