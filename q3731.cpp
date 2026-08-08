/*You are given an integer array nums consisting of unique integers.

Originally, nums contained every integer within a certain range. However, some integers might have gone missing from the array.

The smallest and largest integers of the original range are still present in nums.

Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.*/
#include <algorithm>
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int maxval = *max_element(nums.begin(),nums.end());
        int minval = *min_element(nums.begin(),nums.end());

        vector<int> allnums;
        for(int i=minval;i<=maxval;i++){
            allnums.push_back(i);
        }

        unordered_map<int,int> mp;

        for(auto it : nums){
            mp[it]++;
        }
        for(auto it : allnums){
            mp[it]++;
        }

        vector<int> ans;
        for(auto it : mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};