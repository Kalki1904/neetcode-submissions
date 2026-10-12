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
public:vector<int>ans;
    void trav(TreeNode* node, int depth){
        if(!node)return;
        if(depth==ans.size())ans.push_back(node->val);
        trav(node->right,depth+1);
        trav(node->left,depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return ans;
        trav(root,0);
        return ans;

    }
};
