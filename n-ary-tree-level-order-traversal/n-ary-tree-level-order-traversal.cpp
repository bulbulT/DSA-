/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        
        if(root == NULL){
            return res;
        }
        
        queue<Node*> Q;
        Q.push(root);
        
        while(!Q.empty()){
            int size = Q.size();
            vector<int> currlevel;
            
            while(size--){
                Node* front = Q.front();
                currlevel.push_back(front->val);
                
                for(int i = 0; i < front->children.size(); i++){
                    Q.push(front->children[i]);
                }
                Q.pop();
            }
            
            res.push_back(currlevel);
        }
    return res;
    }
};