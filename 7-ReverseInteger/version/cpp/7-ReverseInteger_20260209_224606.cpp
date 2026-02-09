// Last updated: 09/02/2026, 22:46:06
1class Solution {
2public:
3    int reverse(int x) {
4        int ans = 0; // Initialize the reversed number to 0
5        while (x != 0) {
6            int digit = x % 10; // Get the last digit of x
7            
8            // Check for overflow/underflow before updating ans
9            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
10                return 0; // Return 0 if reversing x would cause overflow/underflow
11            }
12            
13            ans = ans * 10 + digit; // Append the digit to the reversed number
14            x = x / 10; // Remove the last digit from x
15        }
16        return ans; // Return the reversed number
17    }
18};