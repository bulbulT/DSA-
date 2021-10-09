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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == NULL) return sum;
        
        queue<TreeNode*> pending;
        pending.push(root);
        
        while(!pending.empty()){
            TreeNode* front = pending.front();
            pending.pop();
            if(front->val >= low && front->val <= high){
                sum += front->val;
            }
            if(front->left) pending.push(front->left);
            if(front->right) pending.push(front->right);
        }
       
        return sum;
        
    }
};