// Last updated: 12/06/2026, 22:55:05
1class Solution {
2public:
3    int longestValidParentheses(string s) {
4
5        vector<int> st;
6        int max_len = 0;
7        int n = s.length();
8        st.push_back(-1);
9        for( int i = 0; i< n;i++ )
10        {
11            if(n <=1) return 0;
12            if(s[i]=='(')
13            {
14                st.push_back(i);
15
16            }
17            else 
18            {
19                st.pop_back();
20                if(st.empty())
21                    st.push_back(i);
22                else
23                    max_len= max(max_len, i-st.back());
24            }
25        }
26
27        return max_len;
28
29        
30    }
31};