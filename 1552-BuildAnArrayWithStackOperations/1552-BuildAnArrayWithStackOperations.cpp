// Last updated: 03/03/2026, 20:06:10
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int cur = 1;              // current number we are "reading" from 1..n
        int i = 0;                // index in target

        while (i < (int)target.size()) {
            // If current number matches target[i], we just "Push"
            if (cur == target[i]) {
                ops.push_back("Push");
                i++;
            } else {
                // We "Push" then "Pop" because we don't want this number
                ops.push_back("Push");
                ops.push_back("Pop");
            }
            cur++;

            // No need to go beyond n, but problem guarantees target elements ≤ n
        }

        return ops;
    }
};
