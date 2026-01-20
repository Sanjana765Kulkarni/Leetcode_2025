// Last updated: 20/01/2026, 22:23:41
1class Solution {
2public:
3    int fib(int n) {
4        if (n <= 0)
5        {
6            return 0;
7        }
8        if ( n == 1)
9        {
10            return 1;
11        }
12        return fib(n-2) + fib(n-1);      
13    }
14};