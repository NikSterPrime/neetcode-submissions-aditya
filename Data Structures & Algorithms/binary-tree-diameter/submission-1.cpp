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
    int depthTree(TreeNode* root)
    {
        if(!root) return 0;
        return 1 + max(depthTree(root->left),depthTree(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        
        int leftdepth = depthTree(root->left);
        int rightdepth = depthTree(root->right);
        int diameter = leftdepth + rightdepth;
        int sub = max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(diameter,sub);
    }
};
