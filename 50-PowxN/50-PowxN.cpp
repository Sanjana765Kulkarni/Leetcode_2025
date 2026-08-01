// Last updated: 01/08/2026, 23:24:46
class Solution {
public:

    double Power(double x, long long n)
    {
         if(n == 0)
        {
            return 1.0;
        }

        if( n == 1)
        {
            return x;
        }
        if(n % 2 ==0)
        {
            return Power(x*x, n/2);
        }


        return x * Power(x, (n-1));
    }
    double myPow(double x, int n) {

        
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return Power(x, N);
    
    }
};