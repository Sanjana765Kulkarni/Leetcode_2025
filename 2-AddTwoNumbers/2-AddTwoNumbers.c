// Last updated: 09/10/2025, 09:40:34
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    struct ListNode* current = dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        // Create a new node for the result
        current->next = malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = sum % 10;
        current->next = NULL;
    }

    // Return the result list, skipping the dummy node
    struct ListNode* result = dummy->next;
    free(dummy);
    return result;
}
