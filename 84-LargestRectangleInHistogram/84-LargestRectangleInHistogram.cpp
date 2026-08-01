// Last updated: 01/08/2026, 23:23:59
class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {

        stack <int> s;
        int n = nums.size();
        int leftsmall[n];
        int rightsmall[n];
        

        for(int i = 0; i< n; i++)
        {
            while(!s.empty() && nums[s.top()] >= nums[i])
                s.pop();
            leftsmall[i] = s.empty()? 0: s.top()+1;
            s.push(i);
        }
        while( !s.empty()) s.pop();
        for( int i = n-1; i>-1; i--)
        {
            while( !s.empty()&& nums[s.top()] >= nums[i])
                s.pop();
            rightsmall[i] = s.empty()? n-1:s.top()-1;
            s.push(i);
        }
        int maxA = 0;
        for( int i = 0; i< n; i++)
        {
            int width = rightsmall[i]-leftsmall[i]+1;
            maxA = max( maxA, nums[i]*width);
        }
        
        return maxA;
    }
};