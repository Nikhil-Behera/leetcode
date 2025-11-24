/*Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int count=0;
        int avg;

        for(int i=0;i<n;i++){
            if(nums[i]%3 == 0 && nums[i]%2 == 0){
                sum += nums[i];
                count++;
            }
        }
        if(count == 0) return count;
        else{
            avg = sum/count;
        }
        return avg;
    }
};