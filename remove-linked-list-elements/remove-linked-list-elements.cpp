/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        
        while(head != NULL && head->val == val){
            head = head->next;
        }
        
        ListNode* currptr = head;
        ListNode* prevptr = NULL;
        
        while(currptr != NULL){
            if(currptr->val == val){
                prevptr->next = currptr->next;
                currptr = currptr->next;
            }
            else{
                prevptr = currptr;
                currptr = currptr->next;
            }
        }
        
        return head;
    }
};