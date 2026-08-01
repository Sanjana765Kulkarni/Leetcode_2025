// Last updated: 01/08/2026, 23:21:14
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = b.length(); cout << n<< endl;
        int m = a.length();cout << m<<endl;

        int rep = n/m; cout << rep <<endl;
        string s;
        for ( int i = 0; i< rep; i++)
        {
            s.append(a);
        } cout << s<<endl;
        if(s.find(b) != string :: npos)
        {
            
            return rep;
        }
        else
        {   for( int i = 0; i< 2; i++)
            {s.append(a);
            rep++;
            if(s.find(b) != string :: npos) return rep;
            }
            return -1;
        }

        
    }
};