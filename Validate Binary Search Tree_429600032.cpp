class Solution {
public:
    bool isValidBST(TreeNode* root,TreeNode* min=NULL,TreeNode*  max=NULL) {
        if(!root)
            return true;
        if (min != NULL && root->val <= min->val) return false;
        if (max != NULL && root->val >= max->val) return false;
        return isValidBST(root->left, min, root) && isValidBST(root->right, root, max);
    }
};
