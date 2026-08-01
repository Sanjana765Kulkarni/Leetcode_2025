// Last updated: 01/08/2026, 23:25:27
class Solution {
public:
    void solve ( string op,int open,int close, vector<string>& ans)
    {
        if(open ==0 && close ==0)
        {
            ans.push_back(op);
            return;
        }
        if(open == close)
        {
            string op1 = op;
            op1.push_back('(');
            solve(op1,open-1,close,ans);
        }
        else if(open ==0)
        {
            string op1 = op;
            op1.push_back(')');
            solve(op1,open,close-1,ans);
        }
        else if(close ==0 )
        {
            string op2 = op;
            op2.push_back('(');
            solve(op2,open-1,close,ans);
        }

        else
        {
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(op1,open-1,close,ans);
            solve(op2,open,close-1,ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        int o = n;
        int c = n;
        string op = "";
        vector<string> ans;
        solve(op,o,c,ans);
        return ans;        
    }
};