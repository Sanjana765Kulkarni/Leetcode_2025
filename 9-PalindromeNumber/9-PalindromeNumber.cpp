// Last updated: 03/03/2026, 20:07:36
class Solution {
public:
    bool isPalindrome(int x) {

        int n = x;
        if (n < 0)
            return false;
        
        vector <int> revDigits;
        while (n > 0){

            revDigits.push_back ((int)(n %10));
            n/=10;
        }

         long long result = 0;
        for (int d : revDigits) {
            result = result * 10 + d;
            if (result > INT_MAX) return 0;
        }

        if ( result == x){
            return true;
        }
        else{
            return false;
        }



    }
};