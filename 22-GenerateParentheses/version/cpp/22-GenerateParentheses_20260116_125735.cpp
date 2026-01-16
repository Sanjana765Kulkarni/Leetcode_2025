// Last updated: 16/01/2026, 12:57:35
1class Solution {
2public:
3    int getLength(ListNode* head) {
4        if (!head) return 0;
5        return 1 + getLength(head->next);
6    }
7
8    ListNode* swapPairs(ListNode* head) {
9        int n = getLength(head);
10        if (n < 2) return head;
11
12        // 1. Initial Setup for the FIRST swap
13        ListNode* ptr1 = head;
14        ListNode* ptr2 = ptr1->next;
15        ListNode* ptr3 = ptr2->next;
16
17        // The new head of the whole list will be the original second node
18        head = ptr2; 
19
20        for (int i = 0; i < n / 2; i++) {
21            // Perform the swap
22            ptr2->next = ptr1;
23            
24            // Look ahead: How do we connect ptr1 to the NEXT pair?
25            // If there's another pair after this one, ptr1 must point to the SECOND node of that pair.
26            if (ptr3 != nullptr && ptr3->next != nullptr) {
27                ptr1->next = ptr3->next; 
28                
29                // Move pointers forward for the next iteration
30                ptr1 = ptr3;
31                ptr2 = ptr1->next;
32                ptr3 = ptr2->next;
33            } else {
34                // No more pairs to swap. 
35                // ptr1 points to ptr3 (which is either the last single node or NULL)
36                ptr1->next = ptr3;
37                break; 
38            }
39        }
40        
41        return head;
42    }
43};