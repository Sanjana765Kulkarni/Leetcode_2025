// Last updated: 01/08/2026, 23:21:41
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack <int> s;
        vector<int> res;

        for( int i = nums2.size()-1; i >= 0; i--)
        {
            while(!s.empty() && s.top () <= nums2[i])
            {
                s.pop();
            }
            mp[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }

        for(int num: nums1)
        {
            res.push_back(mp[num]);
        }

        return res;

    }
               
    
};