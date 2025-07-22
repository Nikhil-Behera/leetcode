/*Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

 */
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(auto it : nums){
        mp[it]++;
    }
    vector<int> ans;
    for(auto it : mp){
        if(it.second > 1){
            ans.push_back(it.first);
        }
    }
    return ans;
    }
};