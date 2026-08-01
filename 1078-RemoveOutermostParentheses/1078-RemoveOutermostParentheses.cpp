// Last updated: 01/08/2026, 23:20:36
class Solution {
public:
    string removeOuterParentheses(string s) {
       
        string result = "";  
       
        int level = 0;       

       
        for (char ch : s) {
            if (ch == '(') {
                if (level > 0) result += ch;
                level++;  
            } 
            else if (ch == ')') {
                level--;  
                if (level > 0) result += ch;
            }
        }

        return result;
    }
};