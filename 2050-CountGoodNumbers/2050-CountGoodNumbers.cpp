// Last updated: 01/08/2026, 23:19:45
class Solution {
public:

    long long MOD = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }
    
    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        long long firstPart = power(5, evenPositions);
        long long secondPart = power(4, oddPositions);

        return (firstPart * secondPart) % MOD;
    }
};