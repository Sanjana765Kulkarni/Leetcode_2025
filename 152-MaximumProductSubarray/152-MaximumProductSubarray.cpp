// Last updated: 03/03/2026, 20:06:47
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = 1, minProduct = 1;
        int res1 = 0, res2 = 0;
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i =0; i<n; i++)
        {
            int curr = nums[i];
            if(curr < 0)
            {
                int temp = minProduct;
                minProduct = maxProduct;
                maxProduct = temp;
            }
                maxProduct = max(nums[i], maxProduct*nums[i]);
                minProduct = min(nums[i],minProduct*nums[i]);
                res1= max(res1,maxProduct);
            
        }
        return res1;
    }
};