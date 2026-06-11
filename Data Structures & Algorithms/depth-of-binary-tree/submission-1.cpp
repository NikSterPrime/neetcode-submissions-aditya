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
    int treeDepth(int depth,TreeNode* node){
        if(!node) return depth;
        return max(treeDepth(depth+1,node->left),treeDepth(depth+1,node->right));
    }
    int maxDepth(TreeNode* root) {
        TreeNode* curr = root;
        return treeDepth(0,curr);
    }
};
