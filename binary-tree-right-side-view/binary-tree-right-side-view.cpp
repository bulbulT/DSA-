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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root == NULL) return res;
        
        queue<TreeNode*> pending;
        pending.push(root);
        
        while(!pending.empty()){
            vector<int> ans;
            int n = pending.size();
            for(int i = 0; i < n; i++){
                TreeNode* front = pending.front();
                pending.pop();
                ans.push_back(front->val);
                if(front->left != NULL) pending.push(front->left);
                if(front->right != NULL) pending.push(front->right);
                
            }
            res.push_back(ans[ans.size() - 1]);
        }
        return res;
        
    }
};