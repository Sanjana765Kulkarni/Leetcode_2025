// Last updated: 01/08/2026, 23:20:56
class Solution {
public:
    long long calculate_hours(vector<int>& piles,int k)
    {
       long long total_hours = 0;
        for (int bananas : piles) {
            // Safe integer-based ceiling division: (a + b - 1) / b 
            // This is equivalent to ceil((double)bananas / k) but faster and safer from float precision bugs
            total_hours += (bananas + k - 1) / k;
        }
        return total_hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high; // Default to maximum possible speed

        // Binary search for the minimum viable speed
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevents potential overflow compared to (low + high) / 2
            
            // If Koko can finish within h hours at speed 'mid'
            if (calculate_hours(piles, mid) <= h) {
                ans = mid;        // 'mid' is valid, record it as a potential answer
                high = mid - 1;   // Try to look for a smaller valid speed in the left half
            } else {
                low = mid + 1;    // 'mid' is too slow, look for a faster speed in the right half
            }
        }

        return ans;



        
    }
};