//https://leetcode.com/problems/to-lower-case/


class Solution {
public:
  string toLowerCase(string str) {
    for (char &c : str)
      if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
    return str;
  }
};
