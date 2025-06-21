/*Problem: Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.*/

/*Learnt: Linked List traversal */

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
    ListNode* deleteDuplicates(ListNode* head) {
        // if (head == nullptr) {
        //     return nullptr;
        // }
        ListNode* temp = head; //very imp step********
        while (head != nullptr) {
            if (head->next != nullptr && head->val == head->next->val) {
                head->next = head->next->next;
            }
            else {
                head = head->next;
            }
        }
        return temp;
    }
};
