// Last updated: 03/03/2026, 20:07:13
class Solution {
public:
    int getLength(ListNode* head) {
        if (!head) return 0;
        return 1 + getLength(head->next);
    }

    ListNode* swapPairs(ListNode* head) {
        int n = getLength(head);
        if (n < 2) return head;

        // 1. Initial Setup for the FIRST swap
        ListNode* ptr1 = head;
        ListNode* ptr2 = ptr1->next;
        ListNode* ptr3 = ptr2->next;

        // The new head of the whole list will be the original second node
        head = ptr2; 

        for (int i = 0; i < n / 2; i++) {
            // Perform the swap
            ptr2->next = ptr1;
            
            // Look ahead: How do we connect ptr1 to the NEXT pair?
            // If there's another pair after this one, ptr1 must point to the SECOND node of that pair.
            if (ptr3 != nullptr && ptr3->next != nullptr) {
                ptr1->next = ptr3->next; 
                
                // Move pointers forward for the next iteration
                ptr1 = ptr3;
                ptr2 = ptr1->next;
                ptr3 = ptr2->next;
            } else {
                // No more pairs to swap. 
                // ptr1 points to ptr3 (which is either the last single node or NULL)
                ptr1->next = ptr3;
                break; 
            }
        }
        
        return head;
    }
};