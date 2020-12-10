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
    int i=0;
    vector<string>v;
    string s="";
public:
    
    void path(TreeNode* root,string s){
        if(root->left==NULL && root->right==NULL){
           s+=to_string(root->val);
           v.push_back(s);
           s="";
       }
        else{
            // s=s+to_string(root->val)+"->";
            if(root->left)
                path(root->left,s+to_string(root->val)+"->");
            if(root->right)
                path(root->right,s+to_string(root->val)+"->");
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
       if(root==NULL)
        return v;    
        path(root,"");
       // if(root->left==NULL && root->right==NULL){
       //     s+=to_string(root->val);
       //     v.push_back(s);
       //     s="";
       // }
       //  else{
       //      s=s+to_string(root->val)+"->";
       //      if(root->left)
       //          binaryTreePaths(root->left);
       //      if(root->right)
       //          binaryTreePaths(root->right);
       //  }
        return v;
    }
};
