// Last updated: 01/08/2026, 23:23:25
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        unordered_set<ListNode*> visited;
        ListNode* ptr = head;

        while(ptr != nullptr)
        {

            if(visited.contains(ptr))
            {
                return true;
            }
            else
            {
                visited.insert(ptr);
                ptr = ptr->next;
            }
        }

        return false;
        
    }
};