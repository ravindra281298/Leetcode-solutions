//Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        ListNode *ptr=NULL,*head=NULL;;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                if(ptr==NULL){
                    ListNode *ptr1=new ListNode(l1->val);
                    ptr=ptr1;
                    head=ptr;
                }
                else{
                    ptr->next=new ListNode(l1->val);
                    ptr=ptr->next;
                }
                l1=l1->next;
            }
            else{
                if(ptr==NULL){
                    ListNode *ptr1=new ListNode(l2->val);
                    ptr=ptr1;
                    head=ptr;
                }
                else{
                    ptr->next=new ListNode(l2->val);
                    ptr=ptr->next;
                }
                l2=l2->next;
            }
        }
        
        while(l1!=NULL){
            if(ptr==NULL){
                    ListNode *ptr1=new ListNode(l1->val);
                    ptr=ptr1;
                head=ptr;
                }
                else{
                    ptr->next=new ListNode(l1->val);
                    ptr=ptr->next;
                }
                l1=l1->next;
        }
        
        while(l2!=NULL){
            if(ptr==NULL){
                    ListNode *ptr1=new ListNode(l2->val);
                    ptr=ptr1;
                    head=ptr;
                }
                else{
                    ptr->next=new ListNode(l2->val);
                    ptr=ptr->next;
                }
                l2=l2->next;
        }
        return head;
    }
};