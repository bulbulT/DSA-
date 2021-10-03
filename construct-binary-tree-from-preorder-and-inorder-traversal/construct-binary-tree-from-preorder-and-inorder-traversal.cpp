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
     TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int preS, int preE, int inS, int inE){
         if(preS > preE || inS > inE) return NULL;
         
         int rootVal = preorder[preS];
         TreeNode* root = new TreeNode(rootVal);
         
         int k = -1;
         for(int i = inS; i <= inE; i++){
             if(inorder[i] == rootVal){
                 k = i;
                 break;
             }
         }
         
         int lPreS = preS + 1 ;
         int lInS = inS;
         int lInE = k -1;
         int lPreE = lInE - lInS + lPreS;
         int rPreE = preE;
         int rPreS = lPreE + 1;
         int rInS = k + 1;
         int rInE = inE;
         root->left = buildTreeHelper(preorder, inorder, lPreS, lPreE, lInS, lInE);
         root->right =buildTreeHelper(preorder, inorder, rPreS, rPreE, rInS, rInE );
         
         return root;
     }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        return buildTreeHelper(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1);
        
    }
};