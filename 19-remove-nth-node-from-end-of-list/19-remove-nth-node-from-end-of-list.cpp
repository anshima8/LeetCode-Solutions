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
     int length( ListNode* head){
         int l=0;
          ListNode* temp=head;
         while(temp!=NULL){
             temp=temp->next;
             l++;
         }
         return l;
     }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int l=length(head);
        if(l==0||l==1){
            return NULL;
            
        }
        ListNode* curr=head;
       int d= l-n;
        
        if(d>0){
            while(d-1){
                curr=curr->next;
                d--;
            }
            curr->next=curr->next->next; 
            
        }
        else if(d==0){
            head=head->next;
        }
        return head;
            
    }
};