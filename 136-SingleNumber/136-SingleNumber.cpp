// Last updated: 03/03/2026, 20:06:49
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if( nums.size() ==1) return nums[0];
        int n = nums.size();
        unordered_map <int,int> mp;
        for (int i =0; i<n;i++)
        {
            mp[nums[i]]++;
        }

        for(const auto & pairs: mp)
        {
            if(pairs.second == 1)
            {
                return pairs.first;
            }
        }
        
        return 0;
    }
};