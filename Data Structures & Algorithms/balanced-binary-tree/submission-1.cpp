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
    bool isBal = true;

    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        inorder(root);
        return isBal;
    }

    void inorder(TreeNode* root)
    {
        if (root == nullptr)
        return;
        int lefttree = depthCal(root->left);
        int righttree = depthCal(root->right);
        cout<<lefttree<<" "<<righttree<<endl;
        if(abs(lefttree-righttree)>1)
        {
            isBal = false;
            return;
        }
        inorder(root->left);
        inorder(root->right);
    }

    int depthCal(TreeNode* node)
    {
        if(node==nullptr) return 0;
        return max(1+depthCal(node->left),1+depthCal(node->right));
    }

};
