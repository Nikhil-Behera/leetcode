/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};