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
    int len(TreeNode* root,int data,int c){
        if(root==NULL)
            return 1;
        if(data==root->val)
            return c;
        
        // int l=len(root->left,data,c+1);
        // int r=len(root->right,data,c+1);
        return max(len(root->left,data,c+1),len(root->right,data,c+1));
    }
    int parent(TreeNode *root,int x){
        if(root==NULL)
            return 0;
        if(root->left!=NULL && root->left->val==x || root->right!=NULL && root->right->val==x)          {
            cout<<root->val;
            return root->val;
        }
        return max(parent(root->left,x),parent(root->right,x));
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        cout<<len(root,x,0)<<" "<<len(root,y,0)<<endl;
        if(len(root,x,0)!=len(root,y,0))
            return false;
        if(parent(root,x)==parent(root,y))
            return false;
        return true;
    }
};
