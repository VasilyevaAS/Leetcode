//https://leetcode.com/problems/uncommon-words-from-two-sentences/

class Solution {
public:

    void split(const string &s, vector<string> &w) {
        int n = s.length();
        int last = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == ' ') {
                w.emplace_back(s.substr(last, i - last));
                last = i + 1;
            }
        w.emplace_back(s.substr(last, n - last));
    }

    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> dicA, dicB;
        vector<string> wordsA, wordsB, ans;
        split(A, wordsA);
        split(B, wordsB);

        for (auto &word : wordsA)
            dicA[word]++;

        for (auto &word: wordsB)
            dicB[word]++;

        for (auto &word : wordsA)
            if (dicA[word] == 1 && dicB.find(word) == dicB.end())
                ans.push_back(word);

        for (auto &word: wordsB)
            if (dicB[word] == 1 && dicA.find(word) == dicA.end())
                ans.push_back(word);

        return ans;
    }
};
