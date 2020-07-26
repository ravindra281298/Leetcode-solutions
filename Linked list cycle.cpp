//Problem Link: https://leetcode.com/problems/linked-list-cycle/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
            return false;
        ListNode *slow=head,*fast=head->next;

        while(fast!=NULL){
            if(slow->val==fast->val)
                return true;
            slow=slow->next;
            if(!fast->next || !fast->next->next)
                return false;
            fast=fast->next->next;
        }
        return false;
    }
};