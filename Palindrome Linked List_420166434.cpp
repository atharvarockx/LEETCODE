/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *reverse(ListNode *h){
        if(h==NULL){
           return h;
       }
        ListNode *prev=NULL,*next=NULL,*t=h;
        while(t){
            next=t->next;
            t->next=prev;
            prev=t;
            t=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode *slow=head,*fast=head,*temp;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *t1=reverse(slow),*t2=head;
        while(t2 && t1){
            // cout<<t2->val<<" "<<t1->val<<endl;
            if(t2->val!=t1->val)
                return false;
            t2=t2->next;
            t1=t1->next;
        }
        return true;
        
    }
};
