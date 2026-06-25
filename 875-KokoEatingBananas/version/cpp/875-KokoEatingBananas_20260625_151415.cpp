// Last updated: 25/06/2026, 15:14:15
1class Solution {
2public:
3    long long calculate_hours(vector<int>& piles,int k)
4    {
5       long long total_hours = 0;
6        for (int bananas : piles) {
7            // Safe integer-based ceiling division: (a + b - 1) / b 
8            // This is equivalent to ceil((double)bananas / k) but faster and safer from float precision bugs
9            total_hours += (bananas + k - 1) / k;
10        }
11        return total_hours;
12    }
13    int minEatingSpeed(vector<int>& piles, int h) {
14        int low = 1;
15        int high = *max_element(piles.begin(), piles.end());
16        int ans = high; // Default to maximum possible speed
17
18        // Binary search for the minimum viable speed
19        while (low <= high) {
20            int mid = low + (high - low) / 2; // Prevents potential overflow compared to (low + high) / 2
21            
22            // If Koko can finish within h hours at speed 'mid'
23            if (calculate_hours(piles, mid) <= h) {
24                ans = mid;        // 'mid' is valid, record it as a potential answer
25                high = mid - 1;   // Try to look for a smaller valid speed in the left half
26            } else {
27                low = mid + 1;    // 'mid' is too slow, look for a faster speed in the right half
28            }
29        }
30
31        return ans;
32
33
34
35        
36    }
37};