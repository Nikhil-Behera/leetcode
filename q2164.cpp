/*You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

Sort the values at odd indices of nums in non-increasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
Sort the values at even indices of nums in non-decreasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.
Return the array formed after rearranging the values of nums.*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        if(nums.size()==2) return nums;
        vector<int> odddec;
        vector<int> eveninc;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                eveninc.push_back(nums[i]);
            }
            else{
                odddec.push_back(nums[i]);
            }
        }

        sort(eveninc.begin(),eveninc.end());
        sort(odddec.begin(),odddec.end(),greater<int>());

        int e=0;
        int o=0;
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(eveninc[e++]);
            }
            else{
                ans.push_back(odddec[o++]);
            }
        }
        return ans;
    }
};