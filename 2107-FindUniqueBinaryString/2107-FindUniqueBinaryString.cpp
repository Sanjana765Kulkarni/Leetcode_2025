// Last updated: 01/08/2026, 23:19:41
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        string res = "";
        int n = nums.size();
        cout << n;
        for(int i =0; i< n; i++)
        {
            if(nums[i][i] == '0')
                res += '1';
            else
                res+='0';
        }
        return res;
        
    }
};