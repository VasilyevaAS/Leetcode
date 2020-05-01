//https://leetcode.com/problems/construct-the-rectangle/



class Solution {
public:
    vector<int> constructRectangle(int area) {
        int ansW = 0;
        int ansL = 0;
        for (int w = 1; w * w <= area; w++){
            if (area % w == 0){
                ansW = w;
                ansL = area / w;
            }
        }
        return {ansL, ansW};
    }
};
