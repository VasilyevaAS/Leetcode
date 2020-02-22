//https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int num1=0, num2=0;
        ListNode *temp_for_l1 = l1, *temp_for_l2 = l2, *out = NULL, *tempout = NULL;
        int carry=0;
        
        while(temp_for_l1!=NULL || temp_for_l2!=NULL || carry){
            int ad = 0;
            if(temp_for_l1!=NULL){
                ad += temp_for_l1->val;
                temp_for_l1 = temp_for_l1->next;
            }
            if(temp_for_l2!=NULL){
                ad += temp_for_l2->val;
                temp_for_l2 = temp_for_l2->next;
            }
            ad += carry;
            int dig = ad%10;
            carry = ad/10;
             
            if(out==NULL){
                out = new ListNode(dig);
                tempout = out;
            }
            else{
               tempout->next =  new ListNode(dig);
                tempout = tempout->next;
            } 
        }
        return out;
    }
};
