/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> mp;
        
        for(int i=0;i<=n;i++){
            mp[i]=0;
        }

        for(auto it : nums){
            mp[it]++;
        }

        int ans =0;
        for(auto it : mp){
            if(it.second == 0){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};