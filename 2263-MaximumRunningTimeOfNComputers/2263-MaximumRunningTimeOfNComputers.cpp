// Last updated: 03/03/2026, 20:06:00
class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (long long b : batteries) sum += b;
        
        long long left = 0, right = sum / n; // maximum possible time
        long long ans = 0;
        
        while (left <= right) {
            long long mid = (left + right) / 2; // target runtime for each computer
            long long total = 0;
            
            for (long long b : batteries) {
                total += min(b, mid);
            }
            
            if (total >= (long long)mid * n) {
                ans = mid;
                left = mid + 1;      // try longer runtime
            } else {
                right = mid - 1;     // runtime too long, decrease
            }
        }
        return ans;
    }
};