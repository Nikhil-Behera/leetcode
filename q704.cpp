/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int lo =0;
        int hi = n-1;
        int i=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                lo = mid+1;
            }
            else{
                hi=mid-1;
            }
            i++;
        }
        return -1;
        // auto ans = find(nums.begin(),nums.end(),target);
        // if(ans!=nums.end()){                                     this soln is through a vector library function.
        //     return ans-nums.begin();
        // }
        // return -1;
    }
};