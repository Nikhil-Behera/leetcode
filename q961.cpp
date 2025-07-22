/*You are given an integer array nums with the following properties:

nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times.*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(auto it : nums){
        mp[it]++;
       } 
       for(auto it : mp){
        if(it.second > 1){
            return it.first;
        }
       }
       return 0;
    }
};