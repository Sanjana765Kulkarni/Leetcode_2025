// Last updated: 01/08/2026, 23:25:09
class Solution {
public:
    int longestValidParentheses(string s) {

        vector<int> st;
        int max_len = 0;
        int n = s.length();
        st.push_back(-1);
        for( int i = 0; i< n;i++ )
        {
            if(n <=1) return 0;
            if(s[i]=='(')
            {
                st.push_back(i);

            }
            else 
            {
                st.pop_back();
                if(st.empty())
                    st.push_back(i);
                else
                    max_len= max(max_len, i-st.back());
            }
        }

        return max_len;

        
    }
};