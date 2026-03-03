// Last updated: 03/03/2026, 20:07:16
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1. Create a dummy node to act as the starting point.
        // Using a stack-allocated node is cleaner in C++.
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // 2. Iterate while both lists have nodes remaining
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;   // Attach list1 node
                list1 = list1->next;  // Move list1 forward
            } else {
                tail->next = list2;   // Attach list2 node
                list2 = list2->next;  // Move list2 forward
            }
            tail = tail->next;        // Move the tail of our new list
        }

        // 3. Attach the remaining nodes of whichever list isn't empty
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // 4. Return the head of the merged list (skip the dummy)
        return dummy.next;
    }
};