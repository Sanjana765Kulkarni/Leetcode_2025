// Last updated: 01/08/2026, 23:23:14
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Fix 1: Store ListNode* instead of int
        unordered_set<ListNode*> visited;

        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        
        // Traverse List A and store all node addresses
        while(ptr1 != nullptr) {
            visited.insert(ptr1);
            ptr1 = ptr1->next;
        }

        // Traverse List B and find the first matching address
        while(ptr2 != nullptr) {
            if(visited.count(ptr2)) { // Fix 2: 'contains' is C++20; 'count' is safer across versions
                return ptr2;          // Fix 3: Return the node pointer, not 'true'
            }
            ptr2 = ptr2->next;        // Fix 4: Advance the pointer to avoid infinite loop
        }

        return nullptr;               // Fix 5: Return nullptr instead of 'false'
    }
};