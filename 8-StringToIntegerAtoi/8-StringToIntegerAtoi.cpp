// Last updated: 03/03/2026, 20:07:34
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long result = 0;   // use long long to detect overflow
        int i = 0, n = s.size();
        int sign = 1;

        // 1. Skip leading whitespace
        while (i < n && s[i] == ' ')
            i++;

        // 2. Detect sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        // 3. Parse digits
        bool hasDigit = false;
        while (i < n && isdigit(s[i])) {
            hasDigit = true;
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // Overflow clamp
            if (sign == 1 && result > INT_MAX) 
                return INT_MAX;
            if (sign == -1 && -result < INT_MIN)
                return INT_MIN;

            i++;
        }

        // If no digits found → return 0
        if (!hasDigit) return 0;

        return (int)(sign * result);
    }
};
