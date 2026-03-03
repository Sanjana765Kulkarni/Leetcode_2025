// Last updated: 03/03/2026, 20:07:14
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // local comparer for min-heap behavior
        struct Compare {
            bool operator()(ListNode* a, ListNode* b) const {
                return a->val > b->val;
            }
        };

        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        for (auto node : lists) {
            if (node) pq.push(node);
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (!pq.empty()) {
            ListNode* cur = pq.top(); pq.pop();
            tail->next = cur;
            tail = tail->next;
            if (cur->next) pq.push(cur->next);
        }
        return dummy.next;
    }
};
