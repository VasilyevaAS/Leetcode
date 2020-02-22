//https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    void helper(ListNode* cur, ListNode* pre){
       if (cur == nullptr || cur->next == nullptr) return;
        ListNode* cnext = cur->next;
        cur->next = cnext->next;
        cnext->next = cur;
        pre->next = cnext;
        pre=cur;
        cur = cur-> next;
        helper (cur,pre);
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        helper(head, dummy);
        return dummy->next;
    }
};
