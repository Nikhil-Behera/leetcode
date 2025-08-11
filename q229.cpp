/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.*/
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        
        vector<int> ans;
        for(auto it : mp){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};