// Last updated: 25/06/2026, 12:56:55
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4
5        unordered_map< int, int> mp;
6        vector<int> count;
7        int n = nums.size();
8
9        for( int i = 0; i< n; i++)
10        {
11            mp[nums[i]]++;
12        }
13
14        for( auto c : mp)
15        {
16            if( c.second > n/3) 
17                count.push_back(c.first);
18        }
19
20        return count;
21        
22    }
23};