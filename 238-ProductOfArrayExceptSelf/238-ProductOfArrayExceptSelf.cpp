// Last updated: 03/03/2026, 20:06:39
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