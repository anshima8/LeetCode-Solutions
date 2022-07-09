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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow=head;
        ListNode *fast=head;
        if(head==NULL){
            return NULL;
            
        }
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                 fast=fast->next;
            }
            slow= slow->next;
            
            if(slow==fast)
                break;
        }
           if(!(fast && fast->next)) return NULL;
        
        slow = head;
        
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        return NULL;
    }
};