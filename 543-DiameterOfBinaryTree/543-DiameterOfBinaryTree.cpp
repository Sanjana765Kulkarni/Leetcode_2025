// Last updated: 03/03/2026, 20:06:25
class Solution {
    int maxDiameter = 0;

    int depth(TreeNode* node) {
        if (!node) return 0;

        int leftH = depth(node->left);
        int rightH = depth(node->right);

        maxDiameter = std::max(maxDiameter, leftH + rightH);

        return 1 + std::max(leftH, rightH);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDiameter = 0;
        depth(root);
        return maxDiameter;
    }
};