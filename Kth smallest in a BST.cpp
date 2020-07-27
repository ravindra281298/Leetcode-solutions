//Problem Link:  https://leetcode.com/problems/kth-smallest-element-in-a-bst/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    priority_queue<int> pq;
    void inorder(TreeNode *root,int k){
        if(!root)
            return;
        inorder(root->left,k);
        if(pq.size()<k){
            pq.push(root->val);
        }
        else{
            int num=pq.top();
            if(root->val<num){
                pq.pop();
                pq.push(root->val);
            }
        }
        inorder(root->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
    
        while(!pq.empty())
            pq.pop();
        inorder(root,k);
        
        return pq.top();
    }
};