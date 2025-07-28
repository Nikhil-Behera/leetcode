/*Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int cs=nums[0];
        int cm=nums[0];
        int ms = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(cs,cm);
            }
            cs = max(nums[i],cs*nums[i]);
            cm=min(nums[i],cm*nums[i]);
            ms = max(ms,cs);
        }
        return ms;
    }
};