//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution{
public:    
    int firstUniqChar(string s){        
        if(s.size()==0) 
            return -1;        
        unordered_map<char, int> hash;        
        for(auto ch: s) hash[ch]++;        
        for(int i = 0; i < s.size(); i++) 
            if(hash[s[i]]==1) 
                return i;        
        return -1;    
    }
};
