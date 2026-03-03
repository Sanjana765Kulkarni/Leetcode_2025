// Last updated: 03/03/2026, 20:05:58
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>positive;
        queue<int>negative;
        vector<int>temp;

        int n = nums.size();

        for(int i =0; i<n; i++)
        {
            if(nums[i]<0)
                negative.push(nums[i]);
            else
                positive.push(nums[i]);
        }

        for(int i = 0; i<n; i++)
        {
            if(i%2 == 0)
            {
                int value = positive.front();
                temp.push_back(value);
                positive.pop();
            }
            else
            {
                int value = negative.front();
                temp.push_back(value);
                negative.pop();
            }
        }
        

        return temp;
    }
};