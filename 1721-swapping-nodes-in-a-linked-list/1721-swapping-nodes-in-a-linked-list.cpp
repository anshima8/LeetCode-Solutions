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
    
    int getLength(ListNode* head){
        ListNode*temp= head;
        int l=0;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        return l;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int l=getLength(head);
        if(l==1){
            return head;
        }
        
        int d1=1;
        int d2=1;
        
        ListNode* temp1= head;
        ListNode* temp2=head;
        
        while(d1<k){
             // d1++;
            temp1=temp1->next;
            
            d1++;
           
        }  while(d2<(l-k+1)){
             // d2++;
            temp2=temp2->next;
            
            d2++;
           
        }
        
        swap(temp1->val,temp2->val);
        return head;
    }
};