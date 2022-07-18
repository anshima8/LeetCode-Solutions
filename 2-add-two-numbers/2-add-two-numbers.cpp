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

    
 /* ListNode* reverse(ListNode* head){
       ListNode* curr=head;
       ListNode* prev= NULL;
       ListNode* next=NULL;
       while(curr!=NULL){
           next= curr->next;
           curr->next=prev;
           prev= curr;
           curr=next;
       }
       return prev;
        
   }*/
    
    void insertAtTail(ListNode* & head, ListNode* & tail, int val){
        ListNode* temp= new ListNode(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
        ListNode* sum(ListNode* l1, ListNode* l2) {
           int carry=0;
            ListNode* anshead=NULL;
            ListNode* anstail=NULL;
            while(l1!=NULL && l2!=NULL){
                int sum= l1->val+ l2->val+carry;
                int digit= sum%10;
                insertAtTail(anshead,anstail,digit);
                carry=sum/10;
                l1=l1->next;
                l2=l2->next;
                
                
            }
            while(l1!=NULL){
                  int sum= l1->val+ carry;
                int digit= sum%10;
                insertAtTail(anshead,anstail,digit);
                carry=sum/10;
                l1=l1->next;
                
            }
            
               while(l2!=NULL){
                  int sum= l2->val+ carry;
                int digit= sum%10;
                insertAtTail(anshead,anstail,digit);
                carry=sum/10;
                   l2=l2->next;
                
            }
            while(carry!=0){
                 int sum=  carry;
                int digit= sum%10;
                insertAtTail(anshead,anstail,digit);
                carry=sum/10; 
            }
            return anshead;
        }


  public:      
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // l1= reverse (l1);
      // l2= reverse(l2);
         
        ListNode* ans= sum(l1,l2);
       // ans=reverse(ans);
        return ans;
        
        
    }
};