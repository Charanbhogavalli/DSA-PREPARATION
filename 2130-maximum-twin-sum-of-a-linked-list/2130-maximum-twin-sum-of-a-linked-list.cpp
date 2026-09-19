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
    int pairSum(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next; 
        }
        ListNode* prev=NULL;
        while(slow!=NULL){
            ListNode* next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        int maxsum=0;
        while(prev!=NULL){
           int sum=0;
           sum=(head->val)+(prev->val);
           maxsum=max(maxsum,sum);
           head=head->next;
           prev=prev->next; 
        }
        return maxsum;
    }
};