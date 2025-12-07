/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i=1;i<n+1;i++){
            mp[i] = 0;
        }

        for(auto it : nums){
            mp[it]++;
        }

        vector<int> ans;

        for(auto it : mp){
            if(it.second > 1) ans.push_back(it.first);
        }

        for(auto it : mp){
            if(it.second == 0) ans.push_back(it.first);
        }

        return ans;
    }
};