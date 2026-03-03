// Last updated: 03/03/2026, 20:06:44
#include <vector>
using namespace std;

class Solution {
public:
    // binary search within [low, high], returns index or -1
    int binarySearch(const vector<int>& numbers, int ele, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (numbers[mid] == ele) return mid;
            else if (numbers[mid] < ele) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = (int)numbers.size();
        for (int i = 0; i < n - 1; ++i) {
            int need = target - numbers[i];
            int found = binarySearch(numbers, need, i + 1, n - 1);
            if (found != -1) {
                // return 1-based indices
                return { i + 1, found + 1 };
            }
        }
        return {}; // no solution found
    }
};
