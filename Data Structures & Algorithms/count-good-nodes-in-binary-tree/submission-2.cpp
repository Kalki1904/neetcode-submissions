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
    int good=0;
    void dfs(TreeNode* node,int least){
        if(!node)return;
        least=max(least,node->val);
        if(least<=node->val)good++;
        dfs(node->left,least);
        dfs(node->right,least);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,INT_MIN);
        return good;
    }
};
