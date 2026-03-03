// Last updated: 03/03/2026, 20:06:02
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector <int> res;
        res.insert(res.end(),nums.begin(), nums.end());
        res.insert(res.end(),nums.begin(), nums.end());

        return res;
        
    }
};