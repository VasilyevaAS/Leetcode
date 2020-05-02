//https://leetcode.com/problems/longest-word-in-dictionary/


class Solution {
    
    enum struct State{
        UNDEF,
        GOOD,
        BAD
    };
    
public:
    string longestWord(vector<string>& words) {
        unordered_map<string, State> state;
        for (const string &word : words){
            state[word] = State::UNDEF;
        }
        for (const string &word : words){
            if (state[word] == State::UNDEF){
                for (int len = (int)word.size() - 1; len >= 0; len--){
                    if (len == 0){
                        for (int len = 1; len <= (int)word.size(); len++){
                            state[word.substr(0, len)] = State::GOOD;
                        }
                    } else {
                        auto it = state.find(word.substr(0, len));
                        if (it == state.end()){
                            for (len = len + 1; len <= (int)word.size(); len++){
                                state[word.substr(0, len)] = State::BAD;
                            }
                            break;
                        } else if (it -> second != State::UNDEF){
                            for (len = len + 1; len <= (int)word.size(); len++){
                                state[word.substr(0, len)] = it -> second;
                            }
                            break;
                        }
                    }
                }
                
            }
            }
            string best = "";
            for (const string &word : words){
                if ((word.size() > best.size() || (word.size() == best.size() && word < best)) && state[word] == State::GOOD){
                    best = word;
                }
            }
            return best;       
        
    }
};
