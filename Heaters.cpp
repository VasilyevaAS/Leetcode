//https://leetcode.com/problems/heaters/

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int maxidx = 0;
        int s = 0;  
        for (int i = 0; i < houses.size();i++)
        {
            int temp = abs(heaters[s]-houses[i]);
            for (int j = s+1; j < heaters.size();j++)
            {
                if (houses[i] == heaters[j])
                {
                    temp = 0;
                    break;
                }
                else if (houses[i] < heaters[j])
                {
                    if (heaters[j] - houses[i]< temp)
                        temp = heaters[j] - houses[i];
                    break;
                }
                else
                {
                    if (houses[i] - heaters[j]<temp)
                        temp = houses[i] - heaters[j];
                    s = j;
                }
            }
            if (temp > maxidx)
                maxidx = temp;
        }
        return maxidx;
    }
};
