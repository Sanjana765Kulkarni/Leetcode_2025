// Last updated: 01/08/2026, 23:24:56
#include <vector>
class Solution {
public:

    void f(int ind, int target, vector<int>& arr,vector<int>& ds, vector< vector<int>>& ans)
    {
        if(ind == arr.size())
        {
            if(target == 0)
                ans.push_back(ds);
            return;
        }
        if(arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            f(ind,target-arr[ind],arr, ds,ans);
            ds.pop_back();
        }
        f(ind+1,target,arr,ds,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {

       vector <int> ds;
       vector<vector<int>> ans;

       int ind =0;

       f(ind,target,arr,ds,ans);
       return ans;
        
    }
};