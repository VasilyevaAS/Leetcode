//https://leetcode.com/problems/binary-watch/



class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        if (num > 10){
            return{};
        }
        vector<int> bits (10, 0);
        for (int i = (int)bits.size() - 1; i >= (int)bits.size() - num; i--){
            bits[i] = 1;
            
        } 
        vector<string> ans;
        do{
            int hour = bits[0] * 8 + bits[1] * 4 + bits[2] * 2 + bits[3] * 1;
            int minute = bits[4] * 32 + bits[5] * 16 + bits[6] * 8 + bits[7] * 4 + bits[8] * 2 + bits[9] * 1;
            if (0 <= hour && hour < 12 && 0 <= minute && minute < 60){
                char temp [5 + 1];
                sprintf(temp, "%d:%02d", hour, minute);
                ans.push_back(temp);
            }
        } while (next_permutation(bits.begin(), bits.end()));
        return ans;
    }
};

