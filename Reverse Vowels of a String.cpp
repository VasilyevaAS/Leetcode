//https://leetcode.com/problems/reverse-vowels-of-a-string/


class Solution {
public:
    string reverseVowels(string s) {
        int dict[128] = {0};
        dict['a']=1; 
        dict['A']=1;
        dict['e']=1; 
        dict['E']=1;
        dict['i']=1; 
        dict['I']=1;
        dict['o']=1; 
        dict['O']=1;
        dict['u']=1;
        dict['U']=1;
        int i=0,j=s.length()-1;
        while(i<j)
        {
            while((dict[s[i]]==0)&&(i<j))
            {
                i++;
            }
            while((dict[s[j]]==0)&&(i<j))
            {
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
