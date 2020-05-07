//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/submissions/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        vector<int> seen(26, 0);

        for (char &c : chars)
            seen[c - 'a']++;

        for (auto &word : words) {
            vector<int> cur(26, 0);
            for (char &c : word)
                cur[c - 'a']++;

            bool flag = true;
            for (int i = 0; i < 26; i++)
                if (cur[i] > seen[i])
                    flag = false;

            if (flag)
                ans += word.length();

        }

        return ans;
    }
};
