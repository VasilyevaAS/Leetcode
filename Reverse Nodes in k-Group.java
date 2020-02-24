//https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/

class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode cur=head;
        int count=0;
        while(cur!=null && count!=k){
            cur=cur.next;
            count++;
        }
        if(count ==k){
            cur=reverseKGroup(cur,k);
            while(count>0){
                ListNode n = head.next;
                head.next=cur;
                cur=head;
                head=n;
                count--;
            }
            head=cur;
        }
        return head;
    }
}
