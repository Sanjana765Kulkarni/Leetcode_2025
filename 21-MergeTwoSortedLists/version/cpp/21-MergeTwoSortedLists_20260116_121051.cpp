// Last updated: 16/01/2026, 12:10:51
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        // 1. Create a dummy node to act as the starting point.
5        // Using a stack-allocated node is cleaner in C++.
6        ListNode dummy(0);
7        ListNode* tail = &dummy;
8
9        // 2. Iterate while both lists have nodes remaining
10        while (list1 != nullptr && list2 != nullptr) {
11            if (list1->val <= list2->val) {
12                tail->next = list1;   // Attach list1 node
13                list1 = list1->next;  // Move list1 forward
14            } else {
15                tail->next = list2;   // Attach list2 node
16                list2 = list2->next;  // Move list2 forward
17            }
18            tail = tail->next;        // Move the tail of our new list
19        }
20
21        // 3. Attach the remaining nodes of whichever list isn't empty
22        if (list1 != nullptr) {
23            tail->next = list1;
24        } else {
25            tail->next = list2;
26        }
27
28        // 4. Return the head of the merged list (skip the dummy)
29        return dummy.next;
30    }
31};