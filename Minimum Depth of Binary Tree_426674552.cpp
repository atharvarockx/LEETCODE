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
    int minDepth(TreeNode* root) {
     if(!root)
         return 0;
     if (root->left == NULL && root->right == NULL) 
         return 1;
    
    int left = minDepth(root->left);
    int right = minDepth(root->right);

    left = left == 0 ? right : left;
    right = right == 0 ? left : right;

    return 1 + min(left, right);
    }
};
