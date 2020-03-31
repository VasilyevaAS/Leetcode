//https://leetcode.com/problems/1-bit-and-2-bit-characters/


class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        assert(!bits.empty());
        assert(bits.back() == 0);
        int firstOne = (int)bits.size() - 1;
        while(firstOne - 1 >= 0 && bits[firstOne - 1] == 1){
            firstOne--;
        }
        return (bits.size() - firstOne) % 2 != 0;
    }
};
