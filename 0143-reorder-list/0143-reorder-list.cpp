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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=second;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
         second=prev;
        ListNode* first=head;
        while(first!=NULL && second!=NULL){
             ListNode* nextfirst=first->next;
             ListNode* nextsecond=second->next;
             first->next=second;
             second->next=nextfirst;
             first=nextfirst;
             second=nextsecond;
        } 
    }
};