//https://leetcode.com/problems/find-common-characters/



class Solution {
public:
    int cnt[26],num[26];
    vector<string> commonChars(vector<string>& A) {
        int i;
        for (i=0;i<26;++i) cnt[i]=100000;
        for (auto s:A){
            for (i=0;i<26;++i) num[i]=0;
            for (int i=0;i<(int)s.length();++i){
                num[s[i]-'a']++;
            }
            for (i=0;i<26;++i) cnt[i]=min(cnt[i],num[i]);
        }
        vector<string> vec;
        for (i=0;i<26;++i)if(cnt[i]>0){
            string s="";
            char ch='a'+i;
            s=s+ch;
            for (int j=0;j<cnt[i];++j){
                vec.push_back(s);
            }
        }
        return vec;
    }
};
