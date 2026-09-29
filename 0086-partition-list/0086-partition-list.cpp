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
    ListNode* partition(ListNode* head, int x) {
        ListNode* first=new ListNode(0);
        ListNode* second=new ListNode(0);
        ListNode* firstpart=first;
        ListNode* secondpart=second;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val>=x){
                secondpart->next=curr;
                secondpart=secondpart->next;
            }
            else{
                firstpart->next=curr;
                firstpart=firstpart->next;
            }
           curr=curr->next;  
        }
        secondpart->next=NULL;
        firstpart->next=second->next;
        return first->next;

    }
};