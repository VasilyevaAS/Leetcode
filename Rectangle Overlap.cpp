//https://leetcode.com/problems/rectangle-overlap/


struct Rect{
    const int minX;
    const int minY;
    const int maxX;
    const int maxY;
    
    Rect(const vector<int>& r) : minX(r[0]), minY(r[1]), maxX(r[2]), maxY(r[3]) 
    {
        assert(minX <= maxX);
        assert(minY <= maxY);
    }
};

class Solution {
    
    bool isSegmentOverlap(int min1, int max1, int min2, int max2) const {
        return !(min1 >= max2 || min2 >= max1);
    }
        
public:
    
    bool isRectangleOverlap(const Rect& r1, const Rect& r2) const {
        return isSegmentOverlap(r1.minX, r1.maxX, r2.minX, r2.maxX) && isSegmentOverlap(r1.minY, r1.maxY, r2.minY, r2.maxY);
    }
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return isRectangleOverlap(Rect(rec1), Rect(rec2));
    }
};
