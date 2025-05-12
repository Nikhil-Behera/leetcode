/*Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n =  nums.size();
        vector<bool> arr(n+1,false);
        int count =0;

        for(int i=0;i<n;i++){
            arr[nums[i]] = true;
        }
        for(int i=1;i<n+1;i++){
            if(arr[i] == false) ans.push_back(i);
        }
        return ans;
    }
};