// Last updated: 03/03/2026, 20:07:09
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Special Case: Overflow
        // -2147483648 / -1 = 2147483648 (which overflows 32-bit int)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Work with long long and absolute values to prevent overflow during calculation
        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long quotient = 0;

        // Bitwise Division: Subtract b * 2^n from a
        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;      // Double the divisor
                multiple <<= 1;  // Double the count
            }
            a -= temp;
            quotient += multiple;
        }

        return negative ? -quotient : quotient;
    }
};