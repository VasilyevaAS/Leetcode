//https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
    int getLen (ListNode* node){
        int len = 0;
        while (node != nullptr){
            node = node -> next;
            len++;
        }
        return len;
    }
    
    ListNode* forward(ListNode* node, int steps){
        while (steps > 0){
            node = node -> next;
            steps--;
        }
        return node;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* ans = nullptr;
        while (head != nullptr){
            ListNode* node = head;
            head = head -> next;
            node->next = ans;
            ans = node;
        }
        return ans;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        int len = getLen(head);
        ListNode* half2 = forward(head, (len + 1) / 2);
        ListNode* last = reverse(half2);
        ListNode* node1 = head;
        ListNode* node2 = last;
        while (node2 != nullptr){
            if (node1 -> val != node2 -> val){
                reverse(last);
                return false;
            }
            node1 = node1 -> next;
            node2 = node2 -> next;
        }
        reverse(last);
        return true;
    }
};
