// Last updated: 03/03/2026, 20:06:41
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hs;
        for (int num : nums) {
            if (hs.count(num)) return true;
            hs.insert(num);
        }
        return false;
    }
};
