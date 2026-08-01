// Last updated: 01/08/2026, 23:20:24
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxBST =0;
    struct SubtreeInfo {
        bool isBST;
        int minVal;
        int maxVal;
        int sum;
    };
    SubtreeInfo postOrder(TreeNode* root)
    {
        if(!root)
        {
            return {true,INT_MAX,INT_MIN,0};
        }
        SubtreeInfo left = postOrder(root->left);
        SubtreeInfo right = postOrder(root->right);

        if( left.isBST && right.isBST && left.maxVal < root->val && right.minVal > root->val)
        {
            int currentSum = root->val + left.sum + right.sum;
            maxBST = std::max(maxBST, currentSum);

            int currentMin = std::min(left.minVal, root->val);
            int currentMax = std::max(right.maxVal, root->val);

            return {true, currentMin, currentMax, currentSum};
        }
        return {false,0,0,0};
    }
    int maxSumBST(TreeNode* root) {
        maxBST = 0;
        postOrder(root);
        return maxBST;
    }
};