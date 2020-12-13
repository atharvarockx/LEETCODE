class Solution {
    vector<int>v;
    int k;
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void traverse(TreeNode* root,int z){
        if(root==NULL)
            return;
        if(z==1){
            v.push_back(root->val);
        }
        
        traverse(root->left,z-1);
        traverse(root->right,z-1);
    }
    TreeNode* LCA(TreeNode* root,int a,int b){
        if(!root)
            return root;
        if(root->val==a || root->val==b)
            return root;
        TreeNode* left=LCA(root->left,a,b);
        TreeNode* right=LCA(root->right,a,b);
        if(left && right)
            return root;
        else
        return left?left:right;
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        k=height(root);
        traverse(root,k);
        return LCA(root,v[0],v[v.size()-1]);
    }
    
};
