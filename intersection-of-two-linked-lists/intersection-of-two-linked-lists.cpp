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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        
        unordered_set<ListNode*> visited;
        while(ptr1 != NULL){
            visited.insert(ptr1);
            ptr1 = ptr1->next;
        }
        
        while(ptr2 != NULL){
            if(visited.find(ptr2) != visited.end()){
                return ptr2;
                break;
            }
            ptr2 = ptr2->next;
        }
        
        return NULL;
    }
};