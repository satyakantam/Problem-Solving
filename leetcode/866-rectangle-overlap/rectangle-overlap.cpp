class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        long long x1 = rec1[0] , y1 = rec1[1];
        long long x2 = rec1[2] , y2 = rec1[3];

        long long x3 = rec2[0] , y3 = rec2[1];
        long long x4 = rec2[2] , y4 = rec2[3];

        if(x2<=x3 || x4<=x1 || y2<=y3 || y4<=y1)
            return 0;
        else    return 1;
    }
};