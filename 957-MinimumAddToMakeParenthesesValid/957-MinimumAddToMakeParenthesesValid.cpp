// Last updated: 01/08/2026, 23:20:51
class Solution {
public:
    int minAddToMakeValid(string s) {
        

        int n = s.length();
        int req =0, Opn =0;
        for (auto c:s)
        {
            if ( c == '(')
            {
                Opn++;
                cout <<Opn <<req<< endl ;
            }
            if( c == ')' && Opn > 0)
            {
                Opn--;
                cout <<Opn <<req<< endl ;
            }
            else if( c == ')' && Opn <= 0)
            {
                req++;
                cout <<Opn <<req<< endl ;
            }
        }
        return abs(req + Opn);
        
    }
};