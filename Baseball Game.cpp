//https://leetcode.com/problems/baseball-game/


class Solution {
    public:	
    int calPoints(vector<string>& ops) {		
        stack<int> record;		
        for (string i : ops){			
            if (i == "C") record.pop();			
            else if (i == "D")	{				
                int tmp = record.top();				
                record.push(2 * tmp);			
            }			
            else if (i == "+"){				
                int a = record.top();				
                record.pop();				
                int b = record.top();				
                record.push(a);				
                record.push(a + b);			
            }			
            else record.push(stoi(i));		
        }		
        int sum = 0;		
        while (!record.empty())	{			
            sum = sum + record.top();			
            record.pop();		
        }		
        return sum;	
    }
};
