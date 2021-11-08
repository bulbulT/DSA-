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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* htemp = head;
        
        int carry = 0;
        while(temp1 != NULL || temp2 != NULL){
            int l1val = 0;
            if(temp1 != NULL){
                l1val = temp1->val;
            }
            
            int l2val = 0;
            if(temp2 != NULL){
                l2val = temp2->val;
            }
            
            int currsum = l1val + l2val + carry;
            carry = currsum / 10;
            int sum = currsum % 10;
            
            
            ListNode* newnode = new ListNode(sum);
            htemp->next = newnode;
            htemp = htemp->next;
            
            if(temp1 != NULL) temp1 = temp1->next;
            if(temp2 != NULL) temp2 = temp2->next;
        }
        
        if(carry > 0){
            ListNode* newnode = new ListNode(carry);
            htemp->next = newnode; 
            htemp = htemp->next;
        }
        
        return head->next;
    }
};