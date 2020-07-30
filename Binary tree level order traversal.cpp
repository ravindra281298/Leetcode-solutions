//Problem Link:  https://leetcode.com/problems/binary-tree-level-order-traversal/


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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        vector<int> v;
        queue<TreeNode *> q;
        if(!root)
            return res;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *ptr=q.front();
            q.pop();
            if(!ptr){
                if(!q.empty()){
                    q.push(NULL);
                }
                res.push_back(v);
                v.clear();
                continue;
            }
            v.push_back(ptr->val);
            if(ptr->left)
                q.push(ptr->left);
            if(ptr->right)
                q.push(ptr->right);
        }
        return res;
    }
};