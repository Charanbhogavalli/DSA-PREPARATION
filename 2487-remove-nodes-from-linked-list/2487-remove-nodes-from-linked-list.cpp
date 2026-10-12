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
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr=head;
        stack<int> st;
        while(curr!=NULL){
            while(!st.empty() && curr->val>st.top()){
                st.pop();

            }
            st.push(curr->val);
            curr=curr->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        stack<int> temp;

        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        while (!temp.empty()) {
            tail->next = new ListNode(temp.top());
            temp.pop();
            tail = tail->next;
        }

        return dummy->next;
        
    }
};