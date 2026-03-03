// Last updated: 03/03/2026, 20:07:18
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // 1. Push all opening brackets onto the stack
                st.push(c);
            } else {
                // 2. Encountered a closing bracket
                // Check if stack is empty or the top doesn't match
                if (st.empty() || 
                    (c == ')' && st.top() != '(') ||
                    (c == ']' && st.top() != '[') ||
                    (c == '}' && st.top() != '{')) 
                {
                    return false; // Mismatch or no opening bracket found
                }
                // 3. Match found, remove the opening bracket
                st.pop(); 
            }
        }
        
        // 4. The string is valid only if the stack is completely empty at the end.
        return st.empty();
    }
};