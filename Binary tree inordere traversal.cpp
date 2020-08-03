//Problem Link: https://leetcode.com/problems/binary-tree-inorder-traversal/


class Solution {
public:
    vector<int> res;
    
    void inorder(TreeNode *root){
        if(!root)
            return;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        res.clear();
        inorder(root);
        return res;
    }
};