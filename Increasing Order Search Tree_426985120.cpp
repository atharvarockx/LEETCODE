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
    TreeNode *head=NULL,*last=NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root){
            increasingBST(root->left);
            TreeNode *newnode=(struct TreeNode*)malloc(sizeof(TreeNode));
            newnode->val=root->val;
            newnode->left=newnode->right=NULL;
            if(head==NULL){
                head=newnode;
                last=newnode;
            }else{
                last->right=newnode;
                last=last->right;
            }
            increasingBST(root->right);
        }
        
        return head;
    }
};
