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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        int size = 1;
        while(temp->next != NULL){
            temp = temp->next;
            size++;
        }
        ListNode* temp1 = head;
        int count = 0;
        while(count < size/2){
            temp1 = temp1->next;
            count++;
        }
        
        head = temp1;
        return head;
    }
};