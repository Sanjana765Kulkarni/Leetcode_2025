// Last updated: 09/10/2025, 12:04:28
// Learn how to get product of an entire array
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product  = std :: accumulate(nums.begin(), nums.end(), 1LL, std::multiplies<long long>());
        cout << product;
        vector <int> answer;

        for (int i = 0; i < nums.size(); i++)
        {
            int val;
            if (nums[i] == 0) val= std::accumulate(
    nums.begin(), nums.end(), 1LL,
    [idx = 0, i](long long acc, int x) mutable {
        return (idx++ == i) ? acc : acc * x;
    }
);
            else {val = product/nums[i];}
            answer. push_back(val);
        }
        
        return answer;
        
    }
};