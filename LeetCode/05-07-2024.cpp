// Problem Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        vector<int> Nodes;
        vector<int> ans;

        int node = 2,prev = temp->val;
        temp = temp->next;
        while(temp->next!=NULL){
            if((prev<temp->val && temp->next->val < temp->val) || (prev>temp->val && temp->next->val > temp->val)){
                Nodes.push_back(node);
            }
            node++;
            prev = temp->val;
            temp = temp->next;
        }
        int n = Nodes.size();
        if(n <= 1){
            return {-1,-1};
        }
        int minm = INT_MAX;
        for(int i = 0; i<n-1;i++){
            if(abs(Nodes[i]-Nodes[i+1]) < minm){
                minm = abs(Nodes[i]-Nodes[i+1]);
            }
        }
        int max = abs(Nodes[0] - Nodes[n-1]);
        return {minm,max};

    }
};
