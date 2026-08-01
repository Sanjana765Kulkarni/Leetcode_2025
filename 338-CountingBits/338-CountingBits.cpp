// Last updated: 01/08/2026, 23:22:12
class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> res;

        for( int i =0; i<=n; i++){
            int sum = __builtin_popcount(i);
            res.push_back(sum);
        }

        return res;

        
    }
};