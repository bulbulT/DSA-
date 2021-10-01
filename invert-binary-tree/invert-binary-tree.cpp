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
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size() != 0){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->right != NULL){
                q.push(temp->right);
            }
            if(temp->left != NULL){
                q.push(temp->left);
            }
            swap(temp->left, temp->right);
        }
        
        return root;
    }
};