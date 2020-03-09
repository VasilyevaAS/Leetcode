//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/



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
    int getDecimalValue(ListNode* head) {
        vector <bool> list;
        ListNode *curr = head;
        
        while (curr != nullptr){
            list.push_back(curr -> val == 1);
            curr = curr -> next;
        }
        
        unsigned int unitValue = 1;
        int total = 0;
        for (int i = list.size() - 1; i >= 0; --i){
            if (list[i])
                total += unitValue;
            unitValue <<=1;
        }
        return total;
        
    }
};
