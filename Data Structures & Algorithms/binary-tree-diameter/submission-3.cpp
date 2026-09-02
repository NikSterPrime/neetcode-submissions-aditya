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
    int depthOfSub(TreeNode* root, int& maxLength) {
        if(root==nullptr) {
            return 0;
        }
        
        int leftTree = depthOfSub(root->left,maxLength);
        int rightTree = depthOfSub(root->right,maxLength);
        maxLength = max(maxLength,leftTree+rightTree);
        return 1 + max(leftTree,rightTree);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxLength = 0;
        depthOfSub(root,maxLength);
        return maxLength;

    }
};
