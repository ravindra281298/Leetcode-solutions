//Problem Link: https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    
    bool check(TreeNode* ptr1, TreeNode* ptr2){
        if(!ptr1 && !ptr2)
            return true;
        if((!ptr1 && ptr2) || (ptr1 && !ptr2) || (ptr1->val!=ptr2->val))
            return false;
        return check(ptr1->left,ptr2->right) && check(ptr2->left,ptr1->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root || (!root->left && !root->right))
            return true;
        return check(root->left,root->right);
    }
};