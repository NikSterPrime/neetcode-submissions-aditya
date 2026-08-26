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
    void invertSubTree(TreeNode* root) {
        if(root==nullptr) {
            return;
        }

        invertSubTree(root->left);
        invertSubTree(root->right);

        swap(root->left,root->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        if(!root) {
            return root;
        }
        invertSubTree(root);
        return root;
    }
};
