/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            queue<Node*>q1;
            while(!q.empty()){
                Node* n=q.front();
                q.pop();
                Node* t=q.front();
                if(q.size()==0)
                    n->next=NULL;
                else
                    n->next=q.front();
                if(n->left!=NULL)
                    q1.push(n->left);
                if(n->right!=NULL){  
                    q1.push(n->right);
                    
                }
            }
            q=q1;
        }
        return root;
    }
};
