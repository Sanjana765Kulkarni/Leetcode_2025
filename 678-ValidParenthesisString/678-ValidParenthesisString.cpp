// Last updated: 01/08/2026, 23:21:17
class Solution {
public:
    bool checkValidString(string s) {

        int min =0;
        int max =0;

        for( int i =0; i<s.length(); i++)
        {
            if(s[i] == '(' )
            {
                min = min+1;
                max = max +1;
                cout << min <<"\t"<<max<<"\n";
            }
            else if( s[i] == ')')
            {
                min = min -1;
                if(min < 0)
                min = 0;
                max = max-1;
                if(max <0)
                    return false;
                cout << min <<"\t"<<max<<"\n";
            }
            else
            {
                min = min-1;
                if(min < 0)
                min = 0;
                max = max +1;
                cout << min <<"\t"<<max<<"\n";
            }
        }

        if( 0 >= min && 0 <= max)
        {
            return true;
        }

        return false;


        
    }
};