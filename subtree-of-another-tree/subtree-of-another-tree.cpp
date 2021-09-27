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
    bool isIdentical(TreeNode* T, TreeNode* S){
        if(T == NULL && S == NULL){
            return true;
        }
        
        if(T != NULL && S == NULL || T == NULL && S != NULL){
            return false;
        }
        if(T->val == S->val){
            if(isIdentical(T->left, S->left) && isIdentical(T->right, S->right)){
                return true;
            }
        }
        
        return false;
    }
    
    bool isSubtree(TreeNode* T, TreeNode* S) {
        queue<TreeNode*> pending;
        pending.push(T);
        
        while(!pending.empty()){
            TreeNode* front = pending.front();
            pending.pop();
            if(isIdentical(front, S)){
                return true;
            }
            
            if(front->left != NULL){
                pending.push(front->left);
            }
            
            if(front->right != NULL){
                pending.push(front->right);
            }
        }
        
        return false;
    }
};