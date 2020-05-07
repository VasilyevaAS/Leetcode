//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/


class Solution 
{
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        int result = 0, count[60]{0};
        for (auto t : time)
        {
            result += count[(60 - t % 60) % 60];
            count[t % 60]++;
        }
        return result;
    }
};
