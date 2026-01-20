// Last updated: 20/01/2026, 22:16:20
1class Solution {
2public:
3    bool isPalindrome(int x) {
4
5        int n = x;
6        if (n < 0)
7            return false;
8        
9        vector <int> revDigits;
10        while (n > 0){
11
12            revDigits.push_back ((int)(n %10));
13            n/=10;
14        }
15
16         long long result = 0;
17        for (int d : revDigits) {
18            result = result * 10 + d;
19            if (result > INT_MAX) return 0;
20        }
21
22        if ( result == x){
23            return true;
24        }
25        else{
26            return false;
27        }
28
29
30
31    }
32};