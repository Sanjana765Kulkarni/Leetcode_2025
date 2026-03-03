// Last updated: 03/03/2026, 20:06:33
#include <vector>
#include <unordered_map>
#include <queue>
#include <iostream>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        // 1. Count the frequency of each number
        std::unordered_map<int, int> freq_map;
        for (int num : nums) {
            freq_map[num]++;
        }
        
        // 2. Use a min-heap to keep track of the k most frequent elements
        // The pair stores: (frequency, number)
        // std::pair<int, int> is compared on the first element (frequency)
        // std::greater<> makes it a min-heap based on frequency
        std::priority_queue<std::pair<int, int>, 
                            std::vector<std::pair<int, int>>, 
                            std::greater<std::pair<int, int>>> min_heap;

        for (auto const& [num, freq] : freq_map) {
            // Push the current element's (frequency, number) onto the heap
            min_heap.push({freq, num});
            
            // If the heap size exceeds k, remove the element with the smallest frequency
            // (which is at the top of the min-heap)
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }
        
        // 3. Extract the k elements from the heap (which are the k most frequent)
        std::vector<int> result;
        while (!min_heap.empty()) {
            // The second element of the pair is the number
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        
        return result;
    }
};

// Note: Another efficient solution involves using 'Bucket Sort' based on frequencies.