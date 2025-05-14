/*Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        
        // for(int i=0;i<nums.size();i++){
        //     int count =0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count == 1){
        //         return nums[i];
        //     }
        // }
        // return -1;

        auto max = max_element(nums.begin(),nums.end());
        int maxi = *max;
        vector<int> arr={maxi,0};
        int n= nums.size();
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }

        for(int i=0;i<maxi;i++){
            if(arr[i]==1) return i;
        }

        return -1;
    }
};