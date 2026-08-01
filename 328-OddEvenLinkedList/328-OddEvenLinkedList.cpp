// Last updated: 01/08/2026, 23:22:13
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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return head;
        }

    vector<int> arr;

    ListNode* ptr = head;

    while(ptr != nullptr)
    {
        arr.push_back(ptr->val);
        if (ptr->next != nullptr) {
                ptr = ptr->next->next;
            } else {
                ptr = nullptr;
            }
    }
    ptr = head->next;

    while(ptr != nullptr)
    {
        arr.push_back(ptr->val);
        if (ptr->next != nullptr) {
                ptr = ptr->next->next;
            } else {
                ptr = nullptr;
            }
    }

    ptr = head;

    for(int i = 0; i< arr.size(); i++)
    {
        ptr->val = arr[i];
        ptr = ptr->next;
    }

    return head;
    }
};