// Last updated: 13/02/2026, 03:16:29
1class Solution{
2    public:
3            int fib(int n)
4            {
5                if(n==1)
6                {
7                    return 1;
8                }
9
10                if(n==0)
11                {
12                    return 0;
13                }
14                return fib(n-1)+ fib(n-2);
15            }
16};