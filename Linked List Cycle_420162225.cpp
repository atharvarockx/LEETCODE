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
    bool hasCycle(ListNode *head) {
        ListNode *small=head,*fast=head;
        while(fast && fast->next){
            small=small->next;
            fast=fast->next->next;
            if(small==fast){
                return true;
            }
        }
        return false;
    }
};
