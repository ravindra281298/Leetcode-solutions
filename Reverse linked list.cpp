//Problem Link: https://leetcode.com/problems/reverse-linked-list



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head,*prev=NULL,*ptr=NULL;
        while(curr!=NULL){
            ptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr;
        }
        return prev;
    }
};