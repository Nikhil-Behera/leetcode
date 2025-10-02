/*Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths. If it is impossible to form any triangle of a non-zero area, return 0.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();

        if(n < 3) return 0;

        sort(nums.begin(),nums.end());
       
        for(int i=n-1;i>=2;i--){
            int a = nums[i];
            int b = nums[i-1];
            int c = nums[i-2];

            if(c + b > a){
                return a + b + c;
            }
        }

        return 0;
    }
};