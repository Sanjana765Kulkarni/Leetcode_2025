// Last updated: 20/01/2026, 21:22:16
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    // Reverse digits as specified:
7    //  - ignore the negative sign while splitting
8    //  - recombine reversed digits
9    //  - reapply negative sign at the end if original was negative
10    // Returns 0 on 32-bit overflow (LeetCode convention).
11    int reverse(int x) {
12        bool wasNegative = (x < 0);
13        long long n = llabs((long long)x);
14
15        // If n==0, result is 0
16        if (n == 0) return 0;
17
18        // Collect digits by repeatedly taking n % 10.
19        // This yields digits in reversed order already: e.g. 123 -> [3,2,1]
20        vector<int> revDigits;
21        while (n > 0) {
22            revDigits.push_back((int)(n % 10));
23            n /= 10;
24        }
25
26        // Combine revDigits into a number directly (they are already reversed)
27        long long result = 0;
28        for (int d : revDigits) {
29            result = result * 10 + d;
30            if (result > INT_MAX) return 0; // overflow guard
31        }
32
33        if (wasNegative) result = -result;
34        if (result < INT_MIN || result > INT_MAX) return 0;
35        return (int)result;
36    }
37};