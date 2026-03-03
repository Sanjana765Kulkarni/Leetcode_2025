// Last updated: 03/03/2026, 20:06:40
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int maxSize = nums.size()/3;

        unordered_map<int,int> mp;

        for ( int i =0; i< nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector < int> st;
        for ( int j = 0; j < nums.size(); j++)
        {
            if ( mp[nums[j]] > maxSize)
            {
                st.push_back(nums[j]);
                mp[nums[j]] = 0;
            }
        }
        return st;
    }
};