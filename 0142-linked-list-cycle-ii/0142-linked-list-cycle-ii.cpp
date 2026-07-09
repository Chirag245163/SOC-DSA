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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* need=head;
        bool condition=false;
        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                condition=true;
                break;
            }
        }
        if (!condition)
            return NULL;
        while(true){
            if(need==slow){
                return need;
            }
            need=need->next;
            slow=slow->next;
        }
    }
};