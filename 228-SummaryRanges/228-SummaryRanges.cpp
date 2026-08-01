// Last updated: 01/08/2026, 23:22:40
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        if(nums.empty()) return {};
        if( nums.size() == 1) return {to_string(nums[0])};

        int start = 0;
        int finish =0 ;

        while( finish < nums.size()-1)
        {
            if( nums[finish] + 1 == nums[finish+1] || nums[finish] == nums[finish+1] )
            {
                finish++;
            }
            else 
            {
                if( start == finish)
                {
                    res.push_back(to_string(nums[start]));
                }
                else
                {
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[finish]));
                }

                finish++;
                start = finish;
            }
        }
        if( start == finish)
                {
                    res.push_back(to_string(nums[start]));
                }
                else
                {
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[finish]));
                }

        return res;
        
    }
};