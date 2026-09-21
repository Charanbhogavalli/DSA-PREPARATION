 class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int count = 1;
 
        while (temp->next != NULL) {
            count++;
            temp = temp->next;
        }

        k = k % count;

        if (k == 0)
            return head;

       
        temp->next = head;

        int rotation = count - k - 1;

        ListNode* curr = head;

        while (rotation--) {
            curr = curr->next;
        }

         
        ListNode* newhead = curr->next;

         
        curr->next = NULL;

        return newhead;
    }
};