/*Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.*/
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxar = 0;
        int area=0;
        // int smol=0;

        for(int i=0;i<=n;i++){
            int current_height = (i==n) ? 0 : heights[i]; 
            while(!st.empty() && heights[st.top()] > current_height){
                // smol = st.top();
                int height = heights[st.top()];
                st.pop();
                
                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i-st.top()-1;
                }
                maxar = max(maxar,height*width);
            }
            st.push(i);
        }
        return maxar;
    }
};