// Problem Link: https://leetcode.com/problems/merge-nodes-in-between-zeros/
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        int sum = 0;
        ListNode* ans = new ListNode(-1);
        ListNode* temp2 = ans;
        temp = temp->next;
        while(temp!=NULL){
            if(temp->val == 0){
                ListNode* MergeNode = new ListNode(sum);
                    temp2->next = MergeNode;
                    temp2 = temp2->next;
                    sum = 0;
            }
            sum = sum + temp->val;
            temp = temp -> next;
        }
        return ans->next;
    }
};
