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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* currleft=dummy;
        for(int i=1;i<left;i++){
            currleft=currleft->next;
        }
        ListNode* curr=currleft->next;
        ListNode* prev=NULL;
        for(int i=0;i<right-left+1;i++){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* lr=currleft->next;
        currleft->next=prev;
        lr->next=curr;
        return dummy->next;
    }
};