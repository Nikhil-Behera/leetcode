/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;

        int l = 0;
        int r = n-1;

        while(l < r){
            int narea=0;
            narea = (r-l) * min(height[l],height[r]);

            if(narea > area){
                area = narea;
            }

            if(height[l] < height[r]) l++;
            else r--;
        }
        return area;
    }
};