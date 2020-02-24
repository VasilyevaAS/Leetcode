//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/submissions/

class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null || head.next == null){
            return head;
        }
        if (head.val != head.next.val){
            head.next = deleteDuplicates(head.next);
            return head;
        }
        ListNode tracker = head;
        while(tracker != null && tracker.val == head.val){
            tracker = tracker.next;
        }
        return deleteDuplicates(tracker);
    }
}
