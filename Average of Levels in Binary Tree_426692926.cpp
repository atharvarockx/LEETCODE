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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>avg;
        double sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int i=0,size=q.size();
            while(i<size){
                TreeNode *temp=q.front();
                q.pop();
                sum+=temp->val;
                i++;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            avg.push_back((sum*1.0)/size);
            sum=0;
        }
        return avg;
    }
};
