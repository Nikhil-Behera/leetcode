/*You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

Replace each even number with 0.
Replace each odd numbers with 1.
Sort the modified array in non-decreasing order.
Return the resulting array after performing these operations.*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] % 2 != 0){
                nums[i] = 1;
            }
            else{
                nums[i] = 0;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};