// Last updated: 03/03/2026, 20:06:46
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n =nums.size();
        int maxSize = n/2;


        for(int i=0; i<n;i++)
        {
            mp[nums[i]]++;
        }

        for(const auto & pair:mp)
        {
            if(pair.second > maxSize)
            {
                return pair.first;
            }
        }

       return 0; 
    }
};