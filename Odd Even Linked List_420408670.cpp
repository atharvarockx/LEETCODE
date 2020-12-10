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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *curr=head,*temp,*t1=head->next;
        while(curr->next){
            temp=curr->next;
            curr->next=curr->next->next;
            curr=temp;
        }
        ListNode *t=head;
        while(t->next){
            cout<<t->val<<endl;
            t=t->next;
        }
        t->next=t1;
        return head;
    }
};
