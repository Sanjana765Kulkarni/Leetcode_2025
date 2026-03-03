// Last updated: 03/03/2026, 20:06:26
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int first = 0;
        int last = 0;
        
        int size =0;
        //nums.push_back(0);
        int n = nums.size();
        if(n ==0) return 0;
        if (std::all_of(nums.begin(), nums.end(), [](int i) { return i == 0; })) {
            return 0;
        }

        do
        {
            if(nums[last]==1)
            {
                if(nums[first] == 1)
                    last++;
                else 
                    first++;
            }
            else
            {
                size = max(size, last-first);
                first = last;
                last++;
            }
        }while (last < n);
        size = max(size, last - first);
        return size;
    } 
    
};