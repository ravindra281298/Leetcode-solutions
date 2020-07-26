// Problem Link:  https://leetcode.com/problems/palindrome-linked-list/


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
    bool isPalindrome(ListNode* head) {
        int n=0,num=0;
        ListNode *ptr = head,*ptr1=NULL,*curr=head,*prev=NULL;
        while(ptr!=NULL){
            n+=1;
            ptr=ptr->next;
        }
        if(n==0 || n==1)
            return true;
        num=n/2;
        while(num--){
            ptr1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ptr1;
        }
        if(n&1)
            ptr1=ptr1->next;
        while(ptr1!=NULL && prev!=NULL){
            if(prev->val!=ptr1->val)
                return false;
            ptr1=ptr1->next;
            prev=prev->next;
        }
        return true;
    }
};