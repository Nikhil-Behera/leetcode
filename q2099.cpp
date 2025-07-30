/*You are given an integer array nums and an integer k. You want to find a subsequence of nums of length k that has the largest sum.

Return any such subsequence as an integer array of length k.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.*/
#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        for(auto it : nums){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){
            mp[ans[i]]++;
        }
        vector<int> final_ans;
        for(auto it : nums){
            if(mp[it] > 0){
                final_ans.push_back(it);
                mp[it]--;
            }
        }
        return final_ans;
    }
};