// Last updated: 03/03/2026, 20:06:57
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

    int depth(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        
        int leftD = depth(root->left);
        if(leftD == -1) return -1;


        int rightD = depth(root->right);
        if(rightD == -1) return -1;

        if( abs(leftD-rightD) >1) return -1;

        return (max(leftD,rightD))+1;
    }
    bool isBalanced(TreeNode* root) {
        return depth(root) != -1;

        
    }
};