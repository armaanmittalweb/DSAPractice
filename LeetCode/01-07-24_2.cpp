// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1;
        ListNode* temp2;
        temp1 = head;
        temp2 = head;

        while(temp1!=NULL && temp1->next!=NULL){
            temp1 = temp1->next->next;
            temp2 = temp2->next;
        }
        return temp2;
    }
};
