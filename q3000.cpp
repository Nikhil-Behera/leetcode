/*You are given a 2D 0-indexed integer array dimensions.

For all indices i, 0 <= i < dimensions.length, dimensions[i][0] represents the length and dimensions[i][1] represents the width of the rectangle i.

Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int max_dl=0;
        int area=0;
        for(int i=0;i<dimensions.size();i++){
            int length = dimensions[i][0];
            int breadth = dimensions[i][1];
            int dl = length*length + breadth*breadth;

            if(max_dl < dl){
                max_dl = dl;
                area = length*breadth;
            }
            if(max_dl == dl){
                area = max(area , length*breadth);
            }
        }
        return area;
    }
};