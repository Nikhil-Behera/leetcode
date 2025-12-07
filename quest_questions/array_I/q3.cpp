/*Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int ans = -1;
        int window = 0;

        for(int right=0;right<n;right++){
            window += nums[right];

            while(right-left+1 != window){
                window -= nums[left];
                left++;
            }

            ans = max(ans,right-left+1);
        }
        return ans;
    }
};