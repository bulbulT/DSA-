/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> visited;
        
        ListNode* temp = head;
        
        while(temp != NULL){
            if(visited.find(temp) != visited.end()){
                return true;
            }
            else{
                visited.insert(temp);
                temp = temp->next; 
            }
            
        }
        return false;
    }
};