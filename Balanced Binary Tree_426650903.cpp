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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int balance(TreeNode* root){
        if(root==NULL)
            return 1;
        int l=height(root->left);
        int r=height(root->right);
        return (abs(l-r)<=1) && balance(root->left) && balance(root->right);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(balance(root)==1)
            return true;
        else
            return false;
    }
};
