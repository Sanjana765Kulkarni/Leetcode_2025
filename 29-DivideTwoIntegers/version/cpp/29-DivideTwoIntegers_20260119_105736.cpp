// Last updated: 19/01/2026, 10:57:36
1class Solution {
2public:
3    int divide(int dividend, int divisor) {
4        // Special Case: Overflow
5        // -2147483648 / -1 = 2147483648 (which overflows 32-bit int)
6        if (dividend == INT_MIN && divisor == -1) {
7            return INT_MAX;
8        }
9
10        // Determine the sign of the result
11        bool negative = (dividend < 0) ^ (divisor < 0);
12
13        // Work with long long and absolute values to prevent overflow during calculation
14        long long a = llabs((long long)dividend);
15        long long b = llabs((long long)divisor);
16        long long quotient = 0;
17
18        // Bitwise Division: Subtract b * 2^n from a
19        while (a >= b) {
20            long long temp = b, multiple = 1;
21            while (a >= (temp << 1)) {
22                temp <<= 1;      // Double the divisor
23                multiple <<= 1;  // Double the count
24            }
25            a -= temp;
26            quotient += multiple;
27        }
28
29        return negative ? -quotient : quotient;
30    }
31};