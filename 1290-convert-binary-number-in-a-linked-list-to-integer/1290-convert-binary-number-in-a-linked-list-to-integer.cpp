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
    int getDecimalValue(ListNode* head) {
         vector<int>arr;
    ListNode* temp=head;
    while(temp!=NULL){
        int num=temp->val;
        arr.push_back(num);
        temp=temp->next;
    }
    int n= arr.size();
    int ans=0;
    int power=1;
    for(int i=n-1;i>=0;i--){
        ans+=(arr[i]*power);
        power*=2;
    }
    return ans;
    }
};