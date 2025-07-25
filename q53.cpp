/*Given an integer array nums, find the subarray with the largest sum, and return its sum.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_Sum = nums[0];
        int curr_Sum = nums[0];
        for(int i=1;i<n;i++){
            curr_Sum=max(nums[i],curr_Sum+nums[i]);
            max_Sum = max(max_Sum,curr_Sum);
        }
        return max_Sum;
    }
};