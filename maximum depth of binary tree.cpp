// Problem Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};