// Last updated: 13/01/2026, 17:38:28
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* dummy = new ListNode(0);
15        dummy->next = head;
16        ListNode* fast = dummy;
17        ListNode * slow = dummy;
18
19        for( int i = 0; i<n; i++)
20        {
21            fast = fast->next;
22        }
23
24        while (fast->next != NULL)
25        {
26            fast = fast-> next;
27            slow = slow->next;
28        }
29
30        ListNode* ToDelete = slow -> next;
31        slow->next =slow->next->next;
32
33        delete ToDelete;
34
35        ListNode* result = dummy->next;
36        delete dummy;
37
38        return result;
39    }
40};