// Last updated: 01/08/2026, 23:23:55
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

    
    void traverse (TreeNode* root, vector<int>&res)
    {
        if(root == nullptr) 
        {
            //res.push_back(nullptr);
            return;
        }

        traverse(root->left,res);
        res.push_back(root->val);
        traverse(root-> right,res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        traverse(root, res);
        return res;
         
    }
};