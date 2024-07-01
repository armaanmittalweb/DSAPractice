// Problem Link: https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = NULL;
        
        while (curr != NULL) {
            Next = curr->next; // Save the next node
            curr->next = prev; // Reverse the current node's pointer
            prev = curr;       // Move prev one step forward
            curr = Next;       // Move curr one step forward
        }
        
        return prev; // prev will be the new head of the reversed list
    }
};
