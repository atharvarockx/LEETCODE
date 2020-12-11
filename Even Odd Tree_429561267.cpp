class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if(!root)
            return true;
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            queue<TreeNode*>q1;
            while(!q.empty()){
                TreeNode* t=q.front();
                q.pop();
                if(i%2==0){
                    if(t->val%2==0)
                        return false;
                    if(!q.empty())
                        if(q.front()->val<=t->val)
                            return false;                      
                }else{
                    if(t->val%2!=0)
                        return false;
                    if(!q.empty())
                        if(q.front()->val>=t->val)
                            return false;
                }
                
                if(t->left)
                    q1.push(t->left);
                if(t->right)
                    q1.push(t->right);
            }
            i++;
            q=q1;
        }
        return true;
    }
};
