//https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       if (!head){
           return head;
       } 
        ListNode* current = head;
        while (current -> next){
            if (current -> next -> val == val){
                current -> next = current -> next -> next;
            }
            else{
                current = current -> next;
            }
        }
        if (head -> val == val){
            return head -> next;
        }
        else {
            return head;
        }
    }
};
