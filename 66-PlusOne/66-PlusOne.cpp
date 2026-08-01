// Last updated: 01/08/2026, 23:24:24
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Loop backwards starting from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No more carries needed, return early
            }
            digits[i] = 0; // If it was 9, turn it into 0 and continue loop
        }
        
        // If all digits were 9 (e.g., [9, 9, 9]), we need an extra 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};