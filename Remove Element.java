//https://leetcode.com/problems/remove-element/


class Solution {
    public int removeElement(int[] nums, int val) {
        if (nums == null)
            return 0;
        
        int slow = 0;
        for (int i = 0; i< nums.length; i++){
            if (nums[i] != val){
                nums[slow++] = nums[i];
            }
        }
        return slow;
    }
}
