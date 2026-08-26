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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return NULL;
        }

        queue<TreeNode*>q;
        q.push(root);

        TreeNode* curr;

        while(!q.empty()) {
            curr = q.front();
            q.pop();

            swap(curr->left,curr->right);

            if(curr->left!=nullptr)q.push(curr->left);
            if(curr->right!=nullptr)q.push(curr->right);
        }


        return root;
    }
};
