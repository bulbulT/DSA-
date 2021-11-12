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
    int length(ListNode* head){
        if(head == NULL) return 0;
        return 1 + length(head->next);
    }
    
    ListNode* rotateHelper(ListNode* head, int k){
        if(head == NULL) return NULL;
        if(head->next == NULL || k == 0) return head;
        
        ListNode* temp = head;
        ListNode* prev;
        
        while(temp->next != NULL){
            prev = temp;
            temp= temp->next;
        }
        temp->next = head;
        prev->next = NULL;
        
        return rotateHelper(temp, k-1);
        
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        if(head->next == NULL || k == 0) return head;
        
        int len = length(head);
        
        k = k % len;
        
        return rotateHelper(head, k);
    }
};