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
    vector<vector<int>>res;
    queue<TreeNode*>q;
    vector<vector<int>> levelOrder(TreeNode* root) {
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            for(int i = q.size();i>0;i--){
                TreeNode* node = q.front();
                q.pop();
                if(node){
                    temp.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if(!temp.empty()){
                res.push_back(temp);
            }
        }    

        return res;

    }
};
