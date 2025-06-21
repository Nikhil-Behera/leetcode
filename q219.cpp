/*Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n && j <= i+k;j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
