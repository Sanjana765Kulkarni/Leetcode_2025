// Last updated: 03/03/2026, 20:05:59
class Solution {
public:
    int minBitFlips(int start, int goal) {

        return bitset<32>(start^goal).count();
        
    }
};