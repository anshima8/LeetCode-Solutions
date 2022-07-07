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
        
       /* ListNode *temp=head;
        if(head==NULL)
            return 0;
        map<ListNode *,bool>visited;
        while(temp!=NULL){
            if(visited[temp]==true)
                return 1;
            visited[temp]=true;
            temp=temp->next;
        }
        return 0;*/
        ListNode * slow=head;
        ListNode *fast=head;
        if(head==NULL){
            return 0;}
            while(fast!=NULL && fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
                
                if(slow==fast)
                    return 1;
            }
        return 0;
        
    }
};