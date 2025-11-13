/*Given an integer array nums, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        sort(nums.begin(),nums.end());

         
        for(int i=2;i<n;i++){
            int left = 0;   
            int right = i-1;

            while(left < right){
                if(nums[left]+nums[right] > nums[i]){
                    count += (right-left);
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
    }
};