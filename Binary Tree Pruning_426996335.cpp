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
    bool check(TreeNode* root){
        if(root==NULL)
            return false;
        bool r1=check(root->left);
        bool r2=check(root->right);
        if(!r1) root->left=NULL;
        if(!r2) root->right=NULL;
        return  root->val==1 || r1 || r2;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        return check(root)?root:NULL;
        
    }
};
