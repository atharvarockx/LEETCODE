class Solution {
    int f=0;
public:
    bool match(ListNode* head, TreeNode* root){
        if(head==NULL)
            return true;
        if(!root || root->val!=head->val)
            return false;
        return match(head->next,root->left) || match(head->next,root->right);
            
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head==NULL)
            return true;
        if(match(head,root))
            return true;
        else
            return root->left && isSubPath(head,root->left) || root->right && isSubPath(head,root->right);
    }
};
