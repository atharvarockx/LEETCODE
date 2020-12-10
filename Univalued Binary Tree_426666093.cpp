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
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        int l=root->left?root->left->val:-1;
        int r=root->right?root->right->val:-1;
        if(l==-1 && r==-1)
            return (isUnivalTree(root->left) && isUnivalTree(root->right));
        else if(l==-1)
            return (root->val==r &&isUnivalTree(root->left) && isUnivalTree(root->right));
        else if(r==-1)
            return (root->val==l &&isUnivalTree(root->left) && isUnivalTree(root->right));
        else
            return (root->val==r && r==l &&isUnivalTree(root->left) && isUnivalTree(root->right));
    }
};
