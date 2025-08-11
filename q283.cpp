/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        int s = temp.size();
        for(int i=0;i<s;i++){
            nums[i]=temp[i];
        }
        for(int i=s;i<n;i++){
            nums[i]=0;
        }
    }
};