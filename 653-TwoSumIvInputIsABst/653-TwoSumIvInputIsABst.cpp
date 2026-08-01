// Last updated: 01/08/2026, 23:21:19
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
    void traverse(TreeNode* root,set<int> &v)
    {
        if(!root) return;
        v.insert(root->val);
        traverse(root->left,v);
        traverse(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        set <int> v;
        traverse(root,v);
        for(auto c:v)
        {
            if(v.contains(k-c) && k-c != c)
            {
                return true;
            }
            
        }
             
        return false;
    }
};