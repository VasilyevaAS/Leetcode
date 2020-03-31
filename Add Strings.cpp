//https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        ostringstream os;
        int i = num1.length();
        int j = num2.length();
        if(--i < 0)
            return num2;
        if(--j < 0)
            return num1;
        int carry = 0;
        while (i >= 0 || j >= 0 || carry > 0){
            int sum = ( i >= 0 ? (num1[i] - '0') : 0) + (j >= 0 ? (num2[j] - '0') : 0) + carry;
            if (sum > 9){
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }
            os << sum;
            --i;
            --j;
        }
        string s = os.str();
        reverse(s.begin(),s.end());
        return s;
    }
};
