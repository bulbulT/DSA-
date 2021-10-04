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
    
    TreeNode* buildTreeHelper(vector<int>& inorder, vector<int>& postorder, int inS, int inE, int postS, int postE){
        if(inS > inE || postS > postE){
            return NULL;
        }
        
        int rootVal = postorder[postE];
        TreeNode* root = new TreeNode(rootVal);
        
        int k = -1;
        for(int i = inS; i <= inE; i++){
            if(inorder[i] == rootVal){
                k = i;
                break;
            }
        }
        
        int lInS = inS;
        int lInE = k - 1;
        int rInS = k + 1;
        int rInE = inE;
        int lPostS = postS;
        int lPostE = lInE - lInS + lPostS;
        int rPostS = lPostE + 1;
        int rPostE = postE - 1;
        
        root->left = buildTreeHelper(inorder, postorder, lInS, lInE, lPostS, lPostE);
        root->right = buildTreeHelper(inorder, postorder, rInS, rInE, rPostS, rPostE);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTreeHelper(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
        
    }
};