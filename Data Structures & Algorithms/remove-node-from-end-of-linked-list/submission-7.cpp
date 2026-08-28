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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || !head->next) return nullptr;

        ListNode* trail = head;
        ListNode* current = head;
        int currNum = 1;

        for (size_t i{ 0 }; i < n - 1; i++) {
            current = current->next;
            currNum++;
        }

        while (current->next) {
            current = current->next;
            currNum++;
            if (current->next) {
                trail = trail->next;
            }
        }

        if(currNum == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        } else {
            ListNode* nthBehind = trail->next;
            trail->next = nthBehind->next;
            delete(nthBehind);
            return head;
        }
    }
};
