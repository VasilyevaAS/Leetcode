//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/


class Solution {
public:
  int findNumbers(vector<int>& nums) {
    return count_if(begin(nums), end(nums), [](int num) {
      int d = 0;
      do { ++d; } while (num /= 10);
      return d % 2 == 0;
    });
  }
};
