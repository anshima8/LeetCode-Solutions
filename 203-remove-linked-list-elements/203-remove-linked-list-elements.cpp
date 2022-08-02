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
    ListNode* removeElements(ListNode* head, int val) {
       
     if(head==NULL){
            return head;}
         while(head!=NULL && head->val==val){
            head = head->next;
        }
        ListNode* node= head;
       // ListNode*  temp=NULL;
        while(node!=NULL && node->next!=NULL){
           // node=node->next;
            if(node->next->val==val){
               
                node->next=node->next->next;
              //delete node;
            }
            else{
                node=node->next;
            }
        } 
        return  head;
      /*  if(head==NULL){
            return head;
            
        }
        ListNode* curr=head;
        ListNode* dum= new ListNode(-1);
        ListNode* prev= dum;
        while(curr!=NULL ){
            if(curr->val==val){
                prev->next=curr->next;
            }
            else{
                prev->next=curr;
                prev=curr;
            }
            curr=curr->next;
        }
        return dum->next;
        */


        
    }
};