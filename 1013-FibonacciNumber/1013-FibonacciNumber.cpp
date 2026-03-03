// Last updated: 03/03/2026, 20:06:18
class Solution{
    public:
            int fib(int n)
            {
                if(n==1)
                {
                    return 1;
                }

                if(n==0)
                {
                    return 0;
                }
                return fib(n-1)+ fib(n-2);
            }
};