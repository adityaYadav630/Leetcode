class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
       int hight=min(rec2[3],rec1[3])-max(rec2[1],rec1[1]);
       int width=min(rec2[2],rec1[2])-max(rec2[0],rec1[0]);
       return hight>0&&width>0; 
    }
};