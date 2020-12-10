/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        int c1=0,c2=0;
        ListNode *temp=headA,*t1=headA,*t2=headB;
        while(temp){
            temp=temp->next;
            c1++;
        }
        temp=headB;
        while(temp){
            temp=temp->next;
            c2++;
        }
        cout<<c1<<" "<<c2;
        if(c1>c2){
            int k=c1-c2;
            while(k--){
                t1=t1->next;
            }
            while(t1->next!=t2->next){
                t1=t1->next;
                t2=t2->next;
            }
            
        }else{
            int k=c2-c1;
            while(k--){
                t2=t2->next;
            }
            while(t1->next!=t2->next){
                t1=t1->next;
                t2=t2->next;
            }
            
        }
        if(t1==t2)
            return t1;
        return t1->next;
    }
};
