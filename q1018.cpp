/*You are given a binary array nums (0-indexed).

We define xi as the number whose binary representation is the subarray nums[0..i] (from most-significant-bit to least-significant-bit).

For example, if nums = [1,0,1], then x0 = 1, x1 = 2, and x2 = 5.
Return an array of booleans answer where answer[i] is true if xi is divisible by 5.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        int remainder=0;
        vector<bool> ans;

        for(int i=0;i<n;i++){
            remainder = (remainder*2 + nums[i]) % 5;

            if(remainder == 0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};