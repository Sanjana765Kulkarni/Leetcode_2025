// Last updated: 13/08/2026, 00:30:44
1class Solution {
2public:
3    vector<vector<int>> permute(vector<int>& nums) {
4        vector<vector<int>> res;
5        if (nums.size() == 1) {
6            vector<int> singleList;
7            singleList.push_back(nums[0]);
8            res.push_back(singleList);
9            return res;
10        }
11
12        for (int i = 0; i < nums.size(); i++) {
13            int n = nums[i];
14            vector<int> remainingNums;
15            for (int j = 0; j < nums.size(); j++) {
16                if (j != i) {
17                    remainingNums.push_back(nums[j]);
18                }
19            }
20            
21            vector<vector<int>> perms = permute(remainingNums);
22            for (vector<int> p : perms) {
23                p.insert(p.begin(), n); 
24                res.push_back(p); 
25            }
26        }
27        
28        return res;    
29    }
30};