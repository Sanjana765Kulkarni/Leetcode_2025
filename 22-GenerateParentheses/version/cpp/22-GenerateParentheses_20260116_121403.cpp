// Last updated: 16/01/2026, 12:14:03
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
13    ListNode* mergeKLists(vector<ListNode*>& lists) {
14        // local comparer for min-heap behavior
15        struct Compare {
16            bool operator()(ListNode* a, ListNode* b) const {
17                return a->val > b->val;
18            }
19        };
20
21        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
22        for (auto node : lists) {
23            if (node) pq.push(node);
24        }
25
26        ListNode dummy(0);
27        ListNode* tail = &dummy;
28        while (!pq.empty()) {
29            ListNode* cur = pq.top(); pq.pop();
30            tail->next = cur;
31            tail = tail->next;
32            if (cur->next) pq.push(cur->next);
33        }
34        return dummy.next;
35    }
36};
37