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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1,*t2=l2;
        ListNode *t3=(struct ListNode*)malloc(sizeof(struct ListNode));
        t3->val=0;
        t3->next=NULL;
        ListNode *c=t3;
        while(t1 && t2){
            if(t1->val<=t2->val){
                c->next=t1;
                t1=t1->next;
                c=c->next;
            }
            else{
                c->next=t2;
                t2=t2->next;
                c=c->next;
            }
        }
        while(t1){
            c->next=t1;
            t1=t1->next;
            c=c->next;
        }
        while(t2){
            c->next=t2;
            t2=t2->next;
            c=c->next;
        }
        return t3->next;
    }
};
