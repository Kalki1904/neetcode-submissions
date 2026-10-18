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
    vector<int>temp;
    void dfs(TreeNode* node,vector<int>&temp){
        if(!node)return;
        dfs(node->left,temp);
        temp.push_back(node->val);
        dfs(node->right,temp);
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root,temp);
        return temp[k-1];
    }
};
