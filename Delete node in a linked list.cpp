// Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list


class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next!=NULL){
            node->val=node->next->val;
            if(node->next->next==NULL)
                node->next=NULL;
            else
                node=node->next;
        }
    }
};