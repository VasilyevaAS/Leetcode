//https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character/


class Solution 
{
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) 
    {
        vector<int> result(queries.size(), 0), count(12, 0);
        for (int i = 0; i < words.size(); ++i) ++count[helper(words[i])];
        for (int i = 9; i >= 0; --i) count[i] += count[i + 1];
        for (int i = 0; i < queries.size(); ++i) result[i] = count[helper(queries[i]) + 1];
        return result;
    }
private:
    int helper(string s)
    {
        sort(s.begin(), s.end());
        int count = 1;
        for (int i = 1; i < s.size(); ++i)
        {
            if (s[i] == s[i - 1]) count++;
            else break;
        }
        return count;
    }
};
