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
        depth+=1;
        if(node->left==nullptr && node->right==nullptr) return depth;
        else if(node->left==nullptr)return treeDepth(depth,node->right);
        else if(node->right==nullptr)return treeDepth(depth,node->left);
        return max(treeDepth(depth,node->left),treeDepth(depth,node->right));
    }
    int maxDepth(TreeNode* root) {
        TreeNode* curr = root;
        if(curr==nullptr)
        {
            return 0;
        }
        int depth = 0;
        depth = treeDepth(depth,curr);
        return depth;
    }
};
