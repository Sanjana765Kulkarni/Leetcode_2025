// Last updated: 03/03/2026, 20:06:52
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
    int maxSum = INT_MIN;
    
    int depth(TreeNode* node) {
        if (!node) return 0;

        int leftH = max(depth(node->left),0);
        int rightH = max(depth(node->right),0);

        int currSum = 0;
        currSum = node->val+ leftH + rightH;
        maxSum = max(maxSum,currSum);

        return node->val + max(leftH, rightH);
    }
    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        depth(root);
        return maxSum;
    }
};