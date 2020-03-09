//https://leetcode.com/problems/middle-of-the-linked-list/



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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr && fast -> next != nullptr){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
};
